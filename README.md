<div align="center">
<h1 align="center">
    <img src="https://miro.medium.com/v2/resize:fit:800/1*3gOnS8dkzrKSbpnJSdDuQg.png" width= "200px">
    <br>Libft</br>
</h1>
<h3>Your very first own library</h3>
<p align="center">
    <img src="https://img.shields.io/badge/Barcelona-100000?style=flat-square&logo=42&logoColor=white&labelColor=000000&color=000000" alt="42 Barcelona"/>
</p>
</div>

## Table of Contents
- [Summary](#-summary)
- [Content](#-Content)
- [Installation](#-installation)


# Summary

Programming in C can be boring when one doesn't have access to the most commonly used functions. This project will allow you to understand how these functions work, how to implement them, and learn how to use them. You will create your own library, which will be very useful as you will use it in future C projects.

**!NOTE** <br />
Because of 42 School norm requirements: <br />
* All variables are declared and aligned at the top of each function <br />
* Each function can't have more then 25 lines of code <br />
* C++ style code commenting is forbidden <br />
* Project should be created just with allowed functions otherwise it's cheating. <br />

---

# Content

### The project consists of 3 main logical parts:
* Standart Libc functions
* Additional functions
* Bonus part functions
---
## Description of each function

### Libc functions

| Function      | Description                                                                           |
| ------------- | --------------------------------------------------------------------------------------| 
| [ft_isalpha](./ft_isalpha.c) | Checks if a character is an alphabetic character. |
| [ft_isdigit](./ft_isdigit.c) | Verifies whether a character is a digit. |
| [ft_isalnum](.isalnum.c) | Checks if a character is alphanumeric. |
| [ft_isascii](./isascii) | Checks if a character is within the ASCII range. |
| [ft_isprint](./ft_isprint.c) | Printing character test (space character inclusive) |
| [ft_toupper](./ft_toupper.c) | Converts a lowercase alphabetic character to its uppercase equivalent. |
| [ft_tolower](./ft_tolower.c) | Converts an uppercase alphabetic character to its lowercase equivalent. |
| [ft_atoi](./ft_atoi.c) | Converts a string str to an integer value. It skips leading whitespace characters, handles an optional sign, and converts the remaining characters into an integer. |
| [ft_memset](./ft_memset.c) | Sets each byte of the memory block pointed to by str to the value c, up to a specified length n. It returns the pointer str after modifying the memory block. |
| [ft_bzero](./ft_bzero) | Sets the first n bytes of the memory pointed to by s to zero. |
| [ft_memcpy](./ft_memcpy.c) | Copies n bytes from the memory area pointed to by src to the memory area pointed to by dest. It returns a pointer to the destination memory area. |
| [ft_memmove](./ft_memmove.c) | Copies n bytes from the memory area pointed to by src to the memory area pointed to by dest. It handles overlapping memory regions correctly by using a temporary buffer. It returns a pointer to the destination memory area. |
| [ft_memchr](./ft_memchr.c) | Searches for the first occurrence of the character c in the memory block pointed to by str, up to a specified length n. It iterates through the memory block using a while loop and checks if each byte matches c. If a match is found, it returns a pointer to that byte. If no match is found within the specified length, it returns NULL. |
| [ft_memcmp](./ft_memcmp.c) | Compares the memory blocks pointed to by s1 and s2 up to a specified length n. It iterates through the memory blocks using a while loop, comparing each byte. If a byte in s1 is not equal to the corresponding byte in s2, it returns the difference between the two bytes. If all bytes are equal within the specified length, it returns 0 to indicate that the memory blocks are equal. |
| [ft_strlen](./ft_strlen.c) | Calculates the length of a null-terminated string. It takes a pointer to a constant character array (str) as input.Finally, it returns the value of i, representing the length of the string. |
| [ft_strdup](./ft_strdup.c) | Duplicates a string src by allocating memory for a new string, copying the contents of src into it, and returning the pointer to the new string. |
| [ft_strlcpy](./ft_strlcpy.c) | Copies a null-terminated string from src to dest, ensuring proper null termination within a limited size of n. It returns the length of the source string.
| [ft_strlcat](./ft_strlcat.c) | Appends a null-terminated string from src to the end of dest, ensuring proper null termination within a limited size of n. It returns the total length of the resulting string, considering the length of dest and the length of the appended src string. |
| [ft_strchr](./ft_strchr.c) | Searches for the first occurrence of the character c in the string str. |
| [ft_strrchr](./ft_strrchr.c) | Searches for the last occurrence of the character c in the string str. |
| [ft_strnstr](./ft_strnstr.c) | Searches for the first occurrence of the string needle within the string haystack, up to a specified length n. |
| [ft_strncmp](./ft_strncmp.c) | Compares the first n characters of the strings s1 and s2. |
| [ft_calloc](./ft_calloc.c) | Allocates memory for an array of elements with a specified count and n size. It checks for overflow, allocates memory using malloc, and zeroes out the memory before returning the pointer to the allocated memory. 

### Additional functions 

| Function      | Description  |
| :--------------:| :----------:|
| [ft_substr](./ft_substr.c) | Extracts a substring from a string s starting at index start with a specified length len. It allocates memory for the substring, copies the characters from s to the substring, and returns the pointer to the substring.|
| [ft_strjoin](./ft_strjoin.c) | Concatenates two strings s1 and s2 into a new string. It checks if either s1 or s2 is NULL, returning NULL in that case. It allocates memory for the new string based on the combined length of s1 and s2, and then copies the characters from s1 and s2 into the new string. Finally, it adds a null terminator and returns the pointer to the new string.|
| [ft_striteri](./ft_striteri.c) | Applies a function f to each character of the string s, along with its corresponding index. It checks if both s and f are valid pointers before proceeding. It initializes a counter i to keep track of the index and iterates over the characters of the string s, applying the function f with the current index and character.|
| [ft_strtrim](./ft_strtrim.c) | Trims the leading and trailing characters from a string s1 that match any character in the set set. It allocates memory for the trimmed string, copies the non-matching characters from s1 to the new string, adds a null terminator, and returns the pointer to the trimmed string.|
| [ft_split](./ft_split.c) | Splits the string s into an array of strings based on the delimiter character c. It counts the number of words in the string, allocates memory for the array of strings, and then splits the string into individual words, creating an array of strings. The resulting array of strings is returned.|
| [ft_itoa](./ft_itoa.c) | Converts an integer n into a string representation. It determines the length of the number, allocates memory for the string, and converts each digit of the number into a character by dividing and modulo operations. The resulting string is returned, with a negative sign added if necessary.|
| [ft_strmapi](./ft_strmapi.c) | Applies a function f to each character of the string s, generating a new string with the modified characters. It first determines the length of the input string and allocates memory for the new string. Then, it iterates over the characters of the input string, applying the function f and storing the result in the new string. The resulting modified string is returned.|
 [ft_putchar_fd](./ft_putchar_fd.c) | Writes the character c to the specified file descriptor fd. It uses the write system call to write a single character to the file descriptor. The character c is passed as the address of a memory location containing the character, and the size of 1 is specified to write exactly one byte.|
| [ft_putstr_fd](./ft_putstr_fd.c) | Writes the string s to the specified file descriptor fd. It first checks if the string s is not null, and then uses the write system call to write the entire string to the file descriptor. The number of bytes to write is calculated with the use of a helper function "str_len", as each character requires exactly one byte.|
| [ft_putendl_fd](./ft_putendl_fd.c) | Writes the string s to the specified file descriptor fd, followed by a newline character. It first checks if the string s is not null, and then uses the write system call to write the entire string to the file descriptor. The length of the string is obtained using the "str_len" function. After writing the string, it writes a newline character ('\n') to the file descriptor to move to the next line.|
| [ft_putnbr_fd](./ft_putnbr_fd.c) | Writes an integer n to the specified file descriptor fd. It uses a custom base conversion mechanism to convert the integer into a string representation based on the decimal digits. The function checks for valid base input and handles negative numbers. It recursively divides the number by the base length and writes the corresponding character to the file descriptor until the entire number is converted.|

---

### Bonus

| Function      | Description  |
| :--------------:| :----------:|
| [ft_lstnew](./srcs/list/ft_lstnew_bonus.c) | Creates a new node for a linked list and initializes it with the given 'content'. It allocates memory for the new node using 'malloc', and if the allocation fails, it returns NULL. The 'content' is set to the provided input, and the 'next' pointer is initialized to NULL. Finally, it returns a pointer to the newly created node.|
| [ft_lstadd_front](./srcs/list/ft_lstadd_front_bonus.c) | Adds the given element 'new' to the front of the linked list pointed to by 'lst'. If 'lst' or 'new' is NULL, the function returns. The 'next' pointer of 'new' is set to the current first element of the list, and 'new' becomes the new first element by updating the 'lst' pointer to point to it.|
| [ft_lstsize](./srcs/list/ft_lstsize_bonus.c) | Calculates and returns the number of nodes in a given linked list 'lst'. It initializes a variable 'i' to 0 and then iterates through the list using a loop, incrementing 'i' for each node encountered until the end of the list is reached (lst becomes NULL). The function then returns the final value of 'i', which represents the total number of nodes in the list.|
| [ft_lstlast](./srcs/list/ft_lstlast_bonus.c) | Returns a pointer to the last node of a linked list 'lst'. If 'lst' is NULL (i.e., the list is empty), it returns NULL. The function iterates through the list using a loop, moving the 'lst' pointer to the next node until it reaches the last node (where 'next' is NULL). Then, it returns the 'lst' pointer, which now points to the last node of the list.|
| [ft_lstadd_back](./srcs/list/ft_lstadd_back_bonus.c) | Adds the given element 'new' to the end of the linked list pointed to by 'lst'. If 'lst' or 'new' is NULL, the function returns. If 'lst' is an empty list, 'new' becomes the first element. Otherwise, the function iterates through the list until the last element is reached and links 'new' to it.|
| [ft_lstdelone](./srcs/list/ft_lstdelone_bonus.c) | Deletes a single node 'lst' from the linked list and frees its content using the 'del' function, then deallocates the memory for the node. However, it fails to remove 'lst' from the list fully, as it only sets the local 'lst' pointer to NULL. The list re-linking must be done externally.|
| [ft_lstclear](./srcs/list/ft_lstclear_bonus.c) | Clears the entire linked list pointed to by 'lst' and deallocates memory for each node. The 'del' function is used to free the memory associated with the content of each node. If 'lst' is NULL, 'del' is NULL, or the list is already empty, the function returns. The function recursively calls itself with the next node until the end of the list is reached. Then, it frees the content of the current node, deallocates the node itself, and sets 'lst' to NULL.|
| [ft_lstiter](./srcs/list/ft_lstiter_bonus.c) | Iterates through a linked list 'lst' and applies the function 'f' to each node's content. If 'lst' or 'f' is NULL, the function returns. The loop runs while there are still nodes in the list. Within each iteration, the 'f' function is called with the content of the current node, and the 'lst' pointer is moved to the next node in the list.|
| [ft_lstmap](./ft_lstmap_bonus.c) | Creates a new linked list by applying the function 'f' to the content of each node in the input list 'lst'. If 'lst', 'f', or 'del' is NULL or if memory allocation fails, it returns NULL. It uses 'lst_new' to create new nodes and links them together to form the resulting list. If any memory allocation fails during the process, it clears the already created nodes and returns NULL. The 'del' function is used to free the memory allocated for each node's content if needed.|


---

## Installation

1. Clone the Libft repository:
```sh
git clone 
```

2. Change to the project directory:
```sh
cd libft
```

3. Compile the library:

    Using Makefile you can create library file libft.a<br/>
    Makefile has 4 main options:<br/>
    ```sh 
    make 
    ``` 
    to compile C files - create object files and library libft.a
    ```sh
    make clean
    ```
    to remove object files.
    ```sh
    make fclean
    ```
    remove libft.a file.
    ```sh
    make re
    ```
    recompile the library.



[**Return**](#Top)
