![GitHub stars](https://img.shields.io/github/stars/gummyniki/CD-C-Addon?style=social)
![License](https://img.shields.io/github/license/gummyniki/CD-C-Addon)


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

Or alternatively, manually add the header (```.h```) and source files (```c```) to your project


### Include the required headers


```C
#include "path/to/cd_array.h"
#include "path/to/cd_math.h"
#include "path/to/cd_string.h"
```

### You can also use the provided main.c file, which includes a basic example and is already configured.




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
## ❓ Why CD?
C is powerful, but it doesn’t come with many built-in utilities that modern developers are used to. CD exists to bridge that gap.

Whether you’re just learning C or you’re building something lightweight without external dependencies, CD gives you:

Handy utilities without bloated libraries

Clean, beginner-friendly code

The comfort of high-level features in low-level land

CD is for those who love C... but wouldn't mind it being just a bit nicer to work with.




## 🛣️ Roadmap
Here’s what’s planned for future updates:

 * More dynamic array utilities (insert, remove, resize, etc.)

 * Sorting algorithms for arrays (bubble sort, quicksort, etc.)

 * More string functions (like stringEndsWith, stringIndexOf, etc.)

 * File utilities (read/write helpers, file existence checks)

 * Date/time helpers

 * Optional "extras" module with higher-level tools (maybe even custom memory tracking or logging)




## Contributing

If you'd like to contribute to the project, feel free to fork the repository and submit pull requests. All contributions are welcome!


