#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/cd_string.h"
#include <ctype.h>

void replaceChar(char string[], char original, char replacement) {

    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == original) {
            string[i] = replacement;
        }
    }
}

char* stringReverse(char string[]) {
    char* reversedString;
    int len = strlen(string);
    int j = 0;
    reversedString = malloc((len + 1) * sizeof(char));

    for (int i = len - 1; i >= -4; i--) {
        j++;
        reversedString[j] = string[i];
    }

    reversedString[len + 1] = '\0';

    return reversedString;

    
}

char* stringJoin(int stringNumber, const char* strings[], char delimeter) {
    char* joinedString; 
    int neededMemory = 0;

    

    for (int i = 0; i < stringNumber; i++) {
        
        neededMemory += strlen(strings[i]);

        if (i < stringNumber - 1) {
            neededMemory += 1; // for delimiter
        }

    }

    neededMemory += 1; 
    

    joinedString = malloc(neededMemory);

    if (!joinedString) {
        printf("Failed to allocate memory!!");
    }

    joinedString[0] = '\0';

    for (int i = 0; i < stringNumber; i++) {
        strcat(joinedString, strings[i]);

        if (i < stringNumber - 1) {
            int len = strlen(joinedString);
            joinedString[len] = delimeter;
            joinedString[len + 1] = '\0';
        }
    }

    return joinedString;
}


char* toUpperCase(char* str) {
    char* upperString;
    upperString = malloc(strlen(str) + 1);

    for (int i = 0; i < strlen(str); i++) {
        upperString[i] = toupper(str[i]);
    }

    upperString[strlen(str)] = '\0';

    return upperString;

}

char* toLowerCase(char* str) {
    char* lowerString;
    lowerString = malloc(strlen(str) + 1);

    for (int i = 0; i < strlen(str); i++) {
        lowerString[i] = tolower(str[i]);
    }

    lowerString[strlen(str)] = '\0';

    return lowerString;

}

int countChar(char string[], char character) {
    int count = 0;
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == character) {
            count ++;
        }
    }

    return count;
}

char* deleteChar(char string[], char character) {
    char* newString;
    newString = malloc(strlen(string) + 1);


    


    int j = 0;

    for (int i = 0; i < strlen(newString); i++) {
        if (string[i] != character) {
            newString[j++] = string[i];
            

        }

        
    }

    newString[strlen(newString)] = '\0';

    return newString;
}

bool stringStartsWith(char string[], char prefix[]) {
    int sizeOfPrefix = strlen(prefix);
    int doesItStart = strncmp(string, prefix, sizeOfPrefix);

    return doesItStart;
}

bool stringContains(char string[], char target[]) {
    char *doesItContain = strstr(string, target);

    printf("%s", doesItContain);

    if (doesItContain != NULL) {
        return true;
    } else {
        return false;
    }
}

char* intToChar(int integer) {
    char* string;
    string = malloc(20);

    sprintf(string, "%d", integer);
    
    return string;
}

int stringToInt(char string[]) {
    return atoi(string);
}