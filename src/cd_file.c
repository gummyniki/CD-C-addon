#include "../include/cd_file.h"
#include <stdio.h>;
#include <stdbool.h>
#include <stdlib.h>

bool fileExists(char* fileName) {
    FILE* fileptr = fopen(fileName, "a");

    if (fileptr == NULL) {
        return false;
    } else {
        return true;
    }
}

long getFileSize(FILE* file) {
    // opening the file in read mode 
  
    // checking if the file exist or not 
    if (file == NULL) { 
        printf("File Not Found!\n"); 
        return -1; 
    } 
  
    fseek(file, 0L, SEEK_END); 
  
    // calculating the size of the file 
    long int res = ftell(file); 

    fseek(file, 0, SEEK_SET);
  
    // closing the file 
  
    return res; 
}

char* readFileLine(const char* fileName) {
    FILE* fileptr = fopen(fileName, "r");
    

    if (fileptr == NULL) {
        perror("Error opening file");
        return NULL;  // Return NULL if the file can't be opened
    }

    int size = getFileSize(fileptr);

    char *content = malloc((size + 1) * sizeof(char));


    if (content == NULL) {
        perror("Memory allocation failed");
        fclose(fileptr);
        return NULL;
    }

    if (fgets(content, size + 1, fileptr) == NULL) {
        perror("Error reading file");
        free(content);
        fclose(fileptr);
        return NULL;
    }

    fclose(fileptr);

    return content;
    
    
}

void writeFile(const char* filename, const char* text) {
    FILE* fileptr = fopen(filename, "w");
    fprintf(fileptr, text);

    fclose(fileptr);
}

void appendToFile(const char* filename, const char* text) {
    FILE* fileptr = fopen(filename, "a");
    fprintf(fileptr, text);

    fclose(fileptr);
}