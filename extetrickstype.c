#include "extetrickstype.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <error.h>
#include <errno.h>

ExtetricksSType NewSymbol(char *lexeme, yytoken_kind_t token, int num_type) {
	ExtetricksSType newSymbol = (ExtetricksSType) malloc(sizeof(xtetricksSType));
	newSymbol->literalName = (char*) malloc(strlen(lexeme)+1);
	strcpy(newSymbol->literalName,lexeme);
	switch(token) {
		case NUM : {
			switch(num_type) {
				case 0 : newSymbol->value.IntValue = atoi(lexeme); break;
				case 1 : newSymbol->value.FloatValue = atof(lexeme); break;
				default : break;
			}
		}
		case ID : newSymbol->value.StringValue = newSymbol->literalName; break;
		default : break;
	}
	return newSymbol;
}
