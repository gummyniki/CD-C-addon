# CD (C-DEVELOPMENT)
CD is a collection of libraries that aim to make your experience with C a lot better by providing basic functionalities like: dynamic arrays, string manipulation, math functions and more.

## Features
```
* cd_array - Provides functions for working with arrays
* cd_string - String manipulation functions like stringStartsWith(), stringContains(), stringReverse() etc.
* cd_math - Common mathematical functions like sum, average etc.
```

## Installation
To use CD in your project, simply clone the repository and include the necessary headers

```bash
git clone https://github.com/gummyniki/CD-C-Addon.git
```

Or alternatively, manually add the headers and source files to your project


### Include the required headers
```C
#include "path/to/cd_array.h"
#include "path/to/cd_math.h"
#include "path/to/cd_string.h"
```

### Use The ```main.c``` file in the project that is already configured with an example, or manually configure the libraries




## Usage Examples

### Array functions

```C
#include "cd_array.h"

int array[] = {1, 2, 3, 4};
printf("Max value: %d\n", getMaxInt(array, 4));
```


### Math functions

```C
#include "cd_math.h"

float nums[] = {1.2, 2.3, 3.4};
printf("Sum: %.2f\n", sumOfFloats(nums, 3));
```


### String functions

```C
#include "cd_string.h"

char* reversed = stringReverse("Hello");
printf("Reversed: %s\n", reversed);
free(reversed);
```






## Contributing

If you'd like to contribute to the project, feel free to fork the repository and submit pull requests. All contributions are welcome!


