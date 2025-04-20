#include "../include/cd_array.h"

#include <stdio.h>
#include <stdlib.h>


int getMaxInt(int array[]) {

    int size = sizeof(array) / sizeof(array[0]) + 1;

    int max = array[0];

    for (int i = 0; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;

}


int getMinInt(int array[]) {

    int size = sizeof(array) / sizeof(array[0]) + 1;
    int min = array[0];

    for (int i = 0; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    return min;

}

float getMaxFloat(float array[]) {

    int size = sizeof(array) / sizeof(array[0]) + 1;
    float max = array[0];

    for (int i = 0; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}

float getMinFloat(float array[]) {
    int size = sizeof(array) / sizeof(array[0]) + 1;
    float min = array[0];

    for (int i = 0; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    return min;
}

