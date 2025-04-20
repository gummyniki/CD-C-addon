#include "../include/cd_array.h"
#include "../include/cd_math.h"
#include "../include/cd_string.h"
#include "../include/cd_file.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {


    char string[] = "hello world";

    char* reversedString = stringReverse(string);

    printf("%s", reversedString);


    return 0;
}