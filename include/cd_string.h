#ifndef CD_STRING_H
#define CD_STRING_H

#include <stddef.h> // for size_t
#include <string.h>
#include <stdbool.h>


void replaceChar(char string[], char original, char replacement);

char* stringReverse(char *string);

char* stringJoin(int stringNumber, const char* strings[], char delimeter);

char* toUpperCase(char* str);
char* toLowerCase(char* str);

int countChar(char string[], char character);
char* deleteChar(char string[], char character);

bool stringStartsWith(char string[], char prefix[]);

bool stringContains(char string[], char target[]);

char* intToChar(int integer);
int stringToInt(char string[]);

#endif // CD_STRING_H
