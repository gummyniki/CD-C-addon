#include "../include/cd_math.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


bool isEven(int n) {
    if (n % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

bool isOdd(int n) {
    if (n % 2 == 1) {
        return true;
    } else {
        return false;
    }
}

int sumOfFloats(float floats[]) {
    float sum = 0;
    int size = sizeof(floats) / sizeof(floats[0]) + 1;

    for (int i = 0; i < size; i++) {
        sum += floats[i];
    }

    return sum;
}

int sumOfInts(int ints[]) {
    int sum = 0;
    int size = sizeof(ints) / sizeof(ints[0]) + 1;

    for (int i = 0; i < size; i++) {
        sum += ints[i];
    }

    return sum;
}

float average(float numbers[]) {
    int size = sizeof(numbers) / sizeof(numbers[0]) + 1;
    printf("Size: %d\n", size);
    float sum = 0;

    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

    return sum / size;
}

