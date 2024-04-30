%{
#include <math.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <error.h>
#include <errno.h>
#include "extetrickstype.h"

#define STRLEN 1024
void yyerror(char *s)
{
fprintf(stderr,"%s\n",s);
return;
}

int yywrap()
{
    return 1;
}

%}

%union {
    char* id;
	ExtetricksSType symbol;
}

%token <symbol> ID
%token <symbol> NUM
%token <symbol> STRING
%token <symbol> TUPLE
%token SECTION1 SECTION2 SECTION3 NEWLINE IF THEN ELSE END WHILE CALL WITH OR AND NOT NEG PLAY
%type <id> START PRIMITIVE ENGINE FUNCTIONS FUNCTION BODY STATEMENT IFSTATEMENT WHILELOOP EXPR ARITHLOGIC TERM ARITH1 FACTOR TERM1 PARAM PARAMLIST

%%
START : SECTION1 NEWLINE PRIMITIVE SECTION2 NEWLINE FUNCTIONS SECTION3 NEWLINE ENGINE { }
			;

PRIMITIVE : ID '=' EXPR NEWLINE PRIMITIVE { 
									if(strncmp($1->literalName, "level", 5) == 0){
										int points_per_line, lines_to_beat, speed_percentage_change;
										sscanf($3, "|%d,%d,%d|", &points_per_line, &lines_to_beat, &speed_percentage_change);
										printf("levels_dict[\"%s\"]=(%d, %d, %d)\n", $1->literalName, points_per_line, lines_to_beat, speed_percentage_change);
									}
									else if(strcmp($1->literalName, "default_cursor") == 0){
										int x, y;
										sscanf($3, "|%d,%d|", &x, &y);
										printf("default_cursor=(%d, %d)\n", x, y); 
									}
									else{
									printf("%s=%s\n", $1->literalName, $3);
									}
}								
					| { }
					;

ENGINE : '[' PLAY ']' { printf("play()\n"); }
			 | '[' PLAY WITH PARAM PARAMLIST ']' { 
				if(strlen($5) != 0){
					printf("play(%s,%s)\n", $4, $5); 
				}
				else{
					printf("play(%s)\n", $4);
				}
			 }
			 | {}
			 ;

FUNCTIONS : FUNCTION NEWLINE FUNCTIONS { printf("%s\n%s", $1, $3);
										$$ = malloc(STRLEN);
											sprintf($$, "%s\n%s", $1, $3);
										}
					| { $$ = malloc(STRLEN); }
					;

FUNCTION : '{' ID BODY '}' {
							$$ = malloc(STRLEN);
							sprintf($$, "def %s(){\n%s\n}", $2->literalName, $3);
							}
				 ;

BODY : STATEMENT BODY { $$ = malloc(STRLEN);
						sprintf($$, "%s\n%s", $1, $2);
					}
		 | STATEMENT { $$ = malloc(STRLEN);
						sprintf($$, "%s", $1);
					}
		 ;

STATEMENT : IFSTATEMENT { $$ = malloc(STRLEN);
							sprintf($$, "%s", $1);
						}
					| WHILELOOP { $$ = malloc(STRLEN);
							sprintf($$, "%s", $1);
						}
					| ID '=' EXPR { $$ = malloc(STRLEN);
							sprintf($$, "%s=%s", $1->literalName, $3);
						}
					;

IFSTATEMENT : IF '(' EXPR ')' THEN STATEMENT END { $$ = malloc(STRLEN);
						sprintf($$, "if %s{\n%s\n}", $3, $6);}
						| IF '(' EXPR ')' THEN STATEMENT ELSE STATEMENT END { $$ = malloc(STRLEN);
																			sprintf($$, "if %s{\n%s\n}\nelse{\n%s\n}", $3, $6, $8);}
						;

WHILELOOP : WHILE '(' EXPR ')' STATEMENT END { $$ = malloc(STRLEN);
						sprintf($$, "while %s{\n%s\n}", $3, $5);
						}
					;

EXPR : ARITHLOGIC { $$ = malloc(STRLEN);
					sprintf($$, "%s", $1);
				}
		 | '[' CALL ID ']' { $$ = malloc(STRLEN);
							sprintf($$, "%s()", $3->literalName);
						}
		 | '[' CALL ID WITH PARAM PARAMLIST ']' { $$ = malloc(STRLEN);
							if(strlen($6) != 0){
								sprintf($$, "%s(%s,%s)", $3->literalName, $5, $6);
							}
							else{
								sprintf($$, "%s(%s)", $3->literalName, $5);
							}
						}
		 ;

ARITHLOGIC : TERM ARITH1 { $$ = malloc(STRLEN);
							sprintf($$, "%s %s", $1, $2);
						}
					 ;

TERM : FACTOR TERM1 { $$ = malloc(STRLEN);
						sprintf($$, "%s %s", $1, $2);}
		 ;

ARITH1 : '+' TERM ARITH1 { $$ = malloc(STRLEN);
							sprintf($$, "+ %s %s", $2, $3);
						}
			 | '-' TERM ARITH1 { $$ = malloc(STRLEN);
							sprintf($$, "- %s %s", $2, $3);
						}
			 | OR TERM ARITH1 { $$ = malloc(STRLEN);
							sprintf($$, "or %s %s", $2, $3);
						}
			 | { $$ = malloc(STRLEN);}
			 ;

FACTOR : ID { $$ = malloc(STRLEN);
				sprintf($$, "%s", $1->literalName);}
			| STRING { $$ = malloc(STRLEN);
				sprintf($$, "%s", $1->literalName);}
			| TUPLE { $$ = malloc(STRLEN);
				sprintf($$, "%s", $1->literalName);}
			 | NUM { $$ = malloc(STRLEN);
				sprintf($$, "%s", $1->literalName);}
			 | '(' EXPR ')' { $$ = malloc(STRLEN);
							sprintf($$, "(%s)", $2);
				}	
			 | '(' NEG EXPR ')' { $$ = malloc(STRLEN);
							sprintf($$, "(not %s)", $3);
				} 
			 | '(' NOT EXPR ')' { $$ = malloc(STRLEN);
							sprintf($$, "(~ %s)", $3);
				}
			 ;

TERM1 : '*' FACTOR TERM1 { $$ = malloc(STRLEN);
							sprintf($$, "* %s %s", $2, $3);
						}
			| AND FACTOR TERM1 { $$ = malloc(STRLEN);
							sprintf($$, "and %s %s", $2, $3);
						}
			| { $$ = malloc(STRLEN);}
			;

PARAM : ID '=' EXPR { $$ = malloc(STRLEN);
						sprintf($$, "%s=%s", $1->literalName, $3);
					}
			;

PARAMLIST : PARAM PARAMLIST { $$ = malloc(STRLEN);
							sprintf($$, "%s,%s", $1, $2); }
					| { $$ = malloc(STRLEN); }
					;
%%

int main(int argc, char *argv[])
{
yyparse();
return 0;
}