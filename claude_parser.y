%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/wait.h>
#define MAX_PARAMS 100
extern FILE* yyin;

int yylex();
int yyerror(char *s);

struct paramValue {
    int numValue;
    char* strValue;
};

char blockParams[MAX_PARAMS][100];
int numOfBlocks = 0;

struct params {
    char* parameter;
    struct paramValue myParamValue;
    bool isString;
};
struct params importantParamsList[MAX_PARAMS];
int numOfParams = 0;
%}

%union {
    int num;
    char id[100];
    float decNum;
    char* str;
    struct funcStatement* stmnt;
}

%token<num> POSNUMBER;
%token<num> NEGNUMBER;
%token<decNum> POSFLOAT;
%token<decNum> NEGFLOAT;
%token<id> ID;
%token OPERATOR;
%token PARENTHESIS;
%token BRACES;
%token NEWLINE;
%token SECTION1;
%token SECTION2;
%token SECTION3;
%token IF;
%token THEN;
%token ELSE;
%token WHILE;
%token END
%token OR;
%token AND;
%token NOT;
%token CALL;
%token PLAY;
%token WITH;
%token NEG;
%token RET;
%token STR;

%type<str> term1
%type<str> expr
%type<str> factor
%type<str> term
%type<str> arithlogic
%type<str> arith1
%type<stmnt> statement
%type<stmnt> ifstatement
%type<stmnt> whileloop
%type<str> param
%type<str> paramlist
%type<str> AND
%type<stmnt> body
%type<id> RET
%type<id> STR

%%

start: SECTION1 NEWLINE params SECTION2 NEWLINE functions SECTION3 NEWLINE engine ;

params: param NEWLINE params
      | param;

param: ID '=' expr NEWLINE {
    char* identifier = $1;
    char* exprValue = $3;
    importantParamsList[numOfParams].parameter = strdup(identifier);
    importantParamsList[numOfParams].myParamValue.strValue = strdup(exprValue);
    importantParamsList[numOfParams].isString = false;
    numOfParams++;
}
| ID '=' ID NEWLINE {
    char* identifier = $1;
    char* strAssgnValue = $3;
    importantParamsList[numOfParams].parameter = strdup(identifier);
    importantParamsList[numOfParams].myParamValue.strValue = strdup(strAssgnValue);
    importantParamsList[numOfParams].isString = true;
    numOfParams++;
};

functions: | function NEWLINE functions ;
function: '{'ID  NEWLINE body '}' {
    // Implement function body handling if needed
};
body: statement NEWLINE body {
    // Implement statement handling if needed
} | statement NEWLINE { /* Implement statement handling if needed */ };
statement: ifstatement {/* Implement if statement handling if needed */}
           | whileloop {/* Implement while loop handling if needed */}
           | ID '=' expr  {
                /* Implement assignment statement handling if needed */
            }
           | RET expr {
                /* Implement return statement handling if needed */
            };

ifstatement: IF '(' expr ')' THEN NEWLINE statement NEWLINE END {
    /* Implement if statement handling if needed */
}
    | IF '(' expr ')' THEN NEWLINE statement NEWLINE ELSE NEWLINE statement NEWLINE END {
        /* Implement if-else statement handling if needed */
    };

whileloop: WHILE '(' expr ')' NEWLINE statement NEWLINE END ;

/* ... (Rest of the grammar rules remain the same) ... */

engine: '['PLAY']' {
    /* Implement engine handling without parameters */
}
| '['PLAY WITH param paramlist']' {
    strcpy(blockParams[0], $4);
    numOfBlocks = 1;
    int i = 1;
    char* temp = strtok($5, " ");
    while(temp != NULL && i < MAX_PARAMS) {
        strcpy(blockParams[i], temp);
        i += 1;
        numOfBlocks += 1;
        temp = strtok(NULL, " ");
    }
};

%%

int main(int args, char* argv[]) {
    if(args < 2) {
        printf("format: ./a.out fileName");
    }
    yyin = fopen(argv[1], "r");
    yyparse();

    FILE *config;
    config = fopen("config.py", "w+");

    fprintf(config, "import engine\n");

    for(int i = 0; i < numOfParams; i++) {
        if(importantParamsList[i].isString == false) {
            fprintf(config, "%s = %s\n", importantParamsList[i].parameter, importantParamsList[i].myParamValue.strValue);
        }
        else {
            fprintf(config, "%s = \"%s\"\n", importantParamsList[i].parameter, importantParamsList[i].myParamValue.strValue);
        }
    }

    if(numOfBlocks > 0) {
        fprintf(config, "distr = dict([ ");

        for(int i = 0; i < numOfBlocks; i++) {
            char curr[100]; memset(curr, 0, 100);
            strcpy(curr, blockParams[i]);
            char* temp = strtok(curr, "=");
            char blockID[30]; memset(blockID, 0, 30);
            strcpy(blockID, temp);
            temp = strtok(NULL, "=");
            char freq[70]; memset(freq, 0, 70);
            strcpy(freq, temp);

            char blockNum[30]; memset(blockNum, 0, 30);
            temp = strtok(blockID, "_");
            temp = strtok(NULL, "_");
            strcpy(blockNum, temp);
            fprintf(config, "(%s, %s)", blockNum, freq);
            if(i != numOfBlocks - 1) fprintf(config, ",");
        }
        fprintf(config, " ])\n");
    }

    FILE* copy = fopen("copy.txt", "r+");
    char buffer[1000];
    while(fgets(buffer, 999, copy) != NULL) {
        fprintf(config, "%s", buffer);
        memset(buffer, 0, 1000);
    }

    fclose(copy);
    fclose(config);

    int pid = fork();

    if (pid == -1) {
        perror("fork");
        return 1;
    } else if (pid == 0) {
        execlp("python3", "python3", "config.py", NULL);
        perror("execlp");
        return 1;
    } else {
        wait(NULL);
    }

    return 0;
}

int yyerror (char* s) {
    fprintf(stderr, "%s\n", s);
    return 0;
}
