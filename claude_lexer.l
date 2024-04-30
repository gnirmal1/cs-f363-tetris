%{
#include "parser.tab.h"
%}

%{
int counts1 = 0, counts2 = 0, counts3 = 0;
int curSection = 0;
%}

POSNUMBER [0-9]+
NEGNUMBER "-"[0-9]+
ID [A-Za-z_][_A-Za-z0-9]*
OPERATOR [+\-*/=]
PARENTHESIS [()]
SPACES [ \t]
NEWLINE "\\n"
BRACES [\[\]{}]
DELIMITER1 "%"
DELIMITER2 "$"
DELIMITER3 "#"
STRING [A-Za-z][A-Za-z ]*

%%

"Section1" {
   if (counts1 > 1) {
       printf("Section1 declared twice\n");
       return -1;
   }
   counts1++;
   curSection = 1;
   return SECTION1;
}

"Section2" {
   if (counts2 > 1) {
       printf("Section2 declared twice\n");
       return -1;
   }
   counts2++;
   if (counts1 == 0) {
       printf("Section2 declared before section1\n");
       return -2;
   }
   curSection = 2;
   return SECTION2;
}

"Section3" {
   if (counts3 > 1) {
       printf("Section3 declared twice\n");
       return -1;
   }
   counts3++;
   if (counts2 == 0 || counts1 == 0) {
       printf("Section3 declared before section2 or section 1\n");
       return -2;
   }
   curSection = 3;
   return SECTION3;
}

"if" {
   return IF;
}

"then" {
   return THEN;
}

"else" {
   return ELSE;
}

"while" {
   return WHILE;
}

"end" {
   return END;
}

"or" {
   return OR;
}

"and" {
   return AND;
}

"not" {
   return NOT;
}

"call" {
   return CALL;
}

"play" {
   return PLAY;
}

"with" {
   return WITH;
}

"neg" {
   return NEG;
}

"return" {
   return RET;
}

"=" {
   return '=';
}

"+" {
   return '+';
}

"-" {
   return '-';
}

"*" {
   return '*';
}

")" {
   return ')';
}

"(" {
   return '(';
}

"{" {
   if (curSection == 1 || curSection == 3) {
       return '{';
   } else {
       printf("Wrong character observed\n");
   }
}

"}" {
   if (curSection == 1 || curSection == 3) {
       return '}';
   } else {
       printf("Wrong character observed\n");
   }
}

"[" {
   if (curSection == 3) {
       return '[';
   } else {
       printf("Wrong character observed\n");
   }
}

"]" {
   if (curSection == 3) {
       return ']';
   } else {
       printf("Wrong character observed\n");
   }
}

"~" {
   return '~';
}

"\\n" {
   return NEWLINE;
}

{ID} {
   strcpy(yylval.id, yytext);
   return ID;
}

{POSNUMBER} {
   yylval.num = atoi(yytext);
   return POSNUMBER;
}

{NEGNUMBER} {
   yylval.num = atoi(yytext);
   return NEGNUMBER;
}

{POSNUMBER}"."{POSNUMBER} {
   yylval.decNum = atof(yytext);
   return POSFLOAT;
}

{NEGNUMBER}"."{POSNUMBER} {
   yylval.decNum = atof(yytext);
   return NEGFLOAT;
}

{DELIMITER1} {
   if (curSection == 0) {
       // Do nothing
   } else {
       printf("Wrong delimiter observed\n");
       while (input() != '\n');
   }
}

{DELIMITER2} {
   if (curSection == 1) {
       // Do nothing
   } else {
       printf("Wrong delimiter observed\n");
       while (input() != '\n');
   }
}

{DELIMITER3} {
   if (curSection == 2) {
       // Do nothing
   } else {
       printf("Wrong delimiter observed\n");
       while (input() != '\n');
   }
}

{SPACES} {
   // Ignore spaces
}

[^A-Za-z0-9_\+\-*/=()[\]{}%.#\n ] {
   printf("Wrong character/string observed\n");
   while (input() != '\n');
}

".*" {
   if (curSection == 0) {
       // Do nothing
   } else {
       printf("Wrong character/string observed\n");
       while (input() != '\n');
   }
}

%%

int yywrap(void) {
   return 1;
}
