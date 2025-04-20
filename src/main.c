#include "../include/cd_array.h"
#include "../include/cd_math.h"
#include "../include/cd_string.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    
    char string[] = "hello world";

    bool doesItContain = stringContains(string, "hell");


    return 0;
}