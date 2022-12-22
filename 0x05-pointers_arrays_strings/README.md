# 0x05. C - Pointers, arrays and strings

![pic](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/216/IMG_2410.JPG)

## Concepts

For this project, we expect you to look at these concepts:
* [Pointers and arrays](https://alx-intranet.hbtn.io/concepts/60)
* [Data Structures](https://alx-intranet.hbtn.io/concepts/120)

## Resources

**Read or watch:**

* C - [Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
* C - [Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
* C - [Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
* [Memory Layout](https://aticleworld.com/memory-layout-of-c-program/)

## Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg), **without the help of Google:**

### General

* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables

## Requirements

### General

* Allowed editors: **vi**, **vim**, **emacs**
* All your files will be compiled on Ubuntu 20.04 LTS using **gcc**, using the options **-Wall -Werror -Wextra -pedantic -std=gnu89**
* All your files should end with a new line
* A **README.md** file, at the root of the folder of the project is mandatory
* Your code should use the **Betty** style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like **printf**, **puts**, etc… is forbidden
* You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* You don’t have to push **_putchar.c**, we will use our file. If you do it won’t be taken into account
* In the following examples, the **main.c** files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own **main.c** files at compilation. Our **main.c** files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function **_putchar** should be included in your header file called **main.h**
* Don’t forget to push your header file

## More Info

You do not need to learn about pointers to functions, pointers to pointers, multidimensional arrays, arrays of structures, **malloc** and **free** - yet.


## Tasks

### 0. 98 Battery st.
Write a function that takes a pointer to an **int** as parameter and updates the value it points to to **98**.

* Prototype: **void reset_to_98(int *n);**

```c
	julien@ubuntu:~/0x05$ cat 0-main.c
	#include "main.h"
	#include <stdio.h>

	/**
 	* main - check the code 
 	*
 	* Return: Always 0.
 	*/
	int main(void)
	{
    		int n;

    		n = 402;
    		printf("n=%d\n", n);
    		reset_to_98(&n);
    		printf("n=%d\n", n);
    		return (0);
	}
	julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
	julien@ubuntu:~/0x05$ ./0-98 
	n=402
	n=98
	julien@ubuntu:~/0x05$ 
``` 

### 1. Don't swap horses in crossing a stream
Write a function that swaps the values of two integers.

* Prototype: **void swap_int(int *a, int *b);**

```c
	julien@ubuntu:~/0x05$ cat 1-main.c
	#include "main.h"
	#include <stdio.h>

	/**
 	* main - check the code
 	*
 	* Return: Always 0.
 	*/
	int main(void)
	{
    		int a;
    		int b;

    		a = 98;
    		b = 42;
    		printf("a=%d, b=%d\n", a, b);
    		swap_int(&a, &b);
    		printf("a=%d, b=%d\n", a, b);
    		return (0);
	}
	julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap
	julien@ubuntu:~/0x05$ ./1-swap 
	a=98, b=42
	a=42, b=98
	julien@ubuntu:~/0x05$
```

### 2. This report, by its very length, defends itself against the risk of being read
Write a function that returns the length of a string.

* Prototype: **int _strlen(char *s);*
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.
```c
	julien@ubuntu:~/0x05$ cat 2-main.c
	#include "main.h"
	#include <stdio.h>

	/**
 	* main - check the code
 	*
 	* Return: Always 0.
 	*/
	int main(void)
	{
    		char *str;
    		int len;

    		str = "My first strlen!";
    		len = _strlen(str);
    		printf("%d\n", len);
    		return (0);
	}
	julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen
	julien@ubuntu:~/0x05$ ./2-strlen 
	16
	julien@ubuntu:~/0x05$ 
```

### 3. I do not fear computers. I fear the lack of them
Write a function that prints a string, followed by a new line, to stdout.

* Prototype: **void _puts(char *str);**

FYI: The standard library provides a similar function: puts. Run man puts to learn more.
```c
	julien@ubuntu:~/0x05$ cat 3-main.c
	#include "main.h"

	/**
 	* main - check the code
 	*
 	* Return: Always 0.
 	*/
	int main(void)
	{
    		char *str;

    		str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    		_puts(str);
    		return (0);
	}
	julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-puts.c -o 3-puts
	julien@ubuntu:~/0x05$ ./3-puts 
	I do not fear computers. I fear the lack of them - Isaac Asimov
	julien@ubuntu:~/0x05$ 
```

### 4. I can only go one way. I've not got a reverse gear
Write a function that prints a string, in reverse, followed by a new line.

* Prototype: **void print_rev(char *s);**
```c
	julien@ubuntu:~/0x05$ cat 4-main.c
	#include "main.h"

	/**
 	* main - check the code
 	*
 	* Return: Always 0.
 	*/
	int main(void)
	{
    		char *str;

    		str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    		print_rev(str);
    		return (0);
	}
	julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev
	julien@ubuntu:~/0x05$ ./4-print_rev 
	vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
	julien@ubuntu:~/0x05$ 
```

### 5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
Write a function that reverses a string.

* Prototype: **void rev_string(char *s);**
```c

```
**6. Half the lies they tell about me aren't true**
Write a function that prints every other character of a string, starting with the first character, followed by a new line.

* Prototype: void puts2(char *str);

**7. Winning is only half of it. Having fun is the other half**
Write a function that prints half of a string, followed by a new line.

* Prototype: void puts_half(char *str);
* The function should print the second half of the string
* If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

**8. Arrays are not pointers**
Write a function that prints n elements of an array of integers, followed by a new line.

* Prototype: void print_array(int *a, int n);
* Where n is the number of elements of the array to be printed
* Numbers must be separated by comma, followed by a space
* The numbers should be displayed in the same order as they are stored in the array
* You are allowed to use printf

**9. strcpy**

* Prototype: char *_strcpy(char *dest, char *src);

Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

* Return value: the pointer to dest

FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.

**10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers**
Write a function that convert a string to an integer.

* Prototype: int _atoi(char *s);
* The number in the string can be preceded by an infinite number of characters
* You need to take into account all the - and + signs before the number
* If there are no numbers in the string, the function must return 0
* You are not allowed to use long
* You are not allowed to declare new variables of “type” array
* You are not allowed to hard-code special values
* We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.

FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.

**11. Don't hate the hacker, hate the code**
Create a program that generates random valid passwords for the program 101-crackme.

* You are allowed to use the standard library
* You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests)
* man srand, rand, time
* gdb and objdump can help

