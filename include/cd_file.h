#ifndef CD_FILE_H
#define CD_FILE_H

#include <stdio.h>

#include <stdbool.h>

bool fileExists(char* fileName);

// Read a file line by line
char* readFileLine(const char* fileName);

// Write text to a file
void writeFile(const char* filename, const char* text);

// Append text to a file
void appendToFile(const char* filename, const char* text);

// Get file size
long getFileSize(FILE* file);

#endif