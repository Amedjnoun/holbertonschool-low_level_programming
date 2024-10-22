# Tasks

## 0. Positive anything is better than negative nothing
**Mandatory**

This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print whether the number stored in the variable `n` is positive or negative.

- You can find the source code [here](https://github.com/holbertonschool-low_level_programming/variables_if_else_while/0-positive_or_negative.c)
- The variable `n` will store a different value every time you run this program
- You don’t have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code
- The output of the program should be:
    - The number, followed by
        - if the number is greater than 0: `is positive`
        - if the number is 0: `is zero`
        - if the number is less than 0: `is negative`
    - followed by a new line

**Example:**
```sh
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/$ ./0-positive_or_negative 
-520693284 is negative
```

**Repo:**
- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `variables_if_else_while`
- File: `0-positive_or_negative.c`

## 1. The last digit
**Mandatory**

This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.

- You can find the source code [here](https://github.com/holbertonschool-low_level_programming/variables_if_else_while/1-last_digit.c)
- The variable `n` will store a different value every time you run this program
- You don’t have to understand what `rand`, `srand`, and `RAND_MAX` do. Please do not touch this code
- The output of the program should be:
    - The string `Last digit of`, followed by
    - `n`, followed by
    - the string `is`, followed by
        - if the last digit of `n` is greater than 5: the string `and is greater than 5`
        - if the last digit of `n` is 0: the string `and is 0`
        - if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
    - followed by a new line

**Example:**
```sh
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
julien@ubuntu:~/$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
```

**Repo:**
- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `variables_if_else_while`
- File: `1-last_digit.c`

## 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
**Mandatory**

Write a program that prints the alphabet in lowercase, followed by a new line.

- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code

**Example:**
```sh
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
julien@ubuntu:~/$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
```

**Repo:**
- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `variables_if_else_while`
- File: `2-print_alphabet.c`

## 3. alphABET
**Mandatory**

Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` three times in your code

**Example:**
```sh
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
julien@ubuntu:~/$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
```

**Repo:**
- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `variables_if_else_while`
- File: `3-print_alphabets.c`

## 4. When I was having that alphabet soup, I never thought that it would pay off
**Mandatory**

Write a program that prints the alphabet in lowercase, followed by a new line.

- Print all the letters except `q` and `e`
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code

**Example:**
```sh
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
julien@ubuntu:~/$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
```

**Repo:**
- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `variables_if_else_while`
- File: `4-print_alphabt.c`

## 5. Numbers
**Mandatory**

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

- All your code should be in the `main` function

**Example:**
```sh
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
julien@ubuntu:~/$ ./5-print_numbers 
0123456789
```

**Repo:**
- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `variables_if_else_while`
- File: `5-print_numbers.c`

## 6. Numberz
**Mandatory**

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

- You are not allowed to use any variable of type `char`
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- You can only use `putchar` twice in your code
- All your code should be in the `main` function

**Example:**
```sh
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
julien@ubuntu:~/$ ./6-print_numberz 
0123456789
```

**Repo:**
- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `variables_if_else_while`
- File: `6-print_numberz.c`

## 7. Smile in the mirror
**Mandatory**

Write a program that prints the lowercase alphabet in reverse, followed by a new line.

- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code

**Example:**
```sh
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
julien@ubuntu:~/$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
```

**Repo:**
- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `variables_if_else_while`
- File: `7-print_tebahpla.c`

## 8. Hexadecimal
**Mandatory**

Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` three times in your code

**Example:**
```sh
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
julien@ubuntu:~/$ ./8-print_base16
0123456789abcdef
```

**Repo:**
- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `variables_if_else_while`
- File: `8-print_base16.c`

## 9. Patience, persistence and perspiration make an unbeatable combination for success
**Mandatory**

Write a program that prints all possible combinations of single-digit numbers.

- Numbers must be separated by `,`, followed by a space
- Numbers should be printed in ascending order
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` four times maximum in your code
- You are not allowed to use any variable of type `char`

**Example:**
```sh
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
```

**Repo:**
- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `variables_if_else_while`
- File: `9-print_comb.c`