#ifndef EXTETRICKSTYPE_H
#define EXTETRICKSTYPE_H

typedef struct {
	char *literalName;
	unsigned int literalNameSize;
	union {
		char CharValue;
		unsigned char UcharValue;
		int IntValue;
		unsigned int UintValue;
		long LongValue;
		unsigned long UlongValue;
		float FloatValue;
		double DoubleValue;
		char *StringValue;
		void *PointerValue;
	} value;
	unsigned int valueSize;
	char *scopeName;
	unsigned int scopeNameSize;
	unsigned int scopeDepth;
} xtetricksSType;

typedef xtetricksSType *ExtetricksSType;
// #define YYSTYPE ExtetricksSType

/* define linked list node for the hash table slots */	
/* also define hashtable for the symbol table */

#include "a2version2.tab.h"

extern ExtetricksSType NewSymbol(char *lexeme, yytoken_kind_t token, int num_type);

#endif /* ndef EXTETRICKSTYPE_H */
