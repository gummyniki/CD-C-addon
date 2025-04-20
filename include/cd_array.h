#include <stddef.h>


#ifndef CD_ARRAY_H
#define CD_ARRAY_H



typedef struct {
    int* data;
    size_t size;
    size_t capacity;
} cd_array;

float getMaxFloat(float array[]);
float getMinFloat(float array[]);

int getMaxInt(int array[]);
int getMinInt(int array[]);



#endif //CD_ARRAY_H