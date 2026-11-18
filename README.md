# Libft

This is my first solo project for a course at 42.

The project requires re-implementing a few C standard library functions, as well as writing some common helper functions, to create my own static library which is libft.a.

### Part 1 - Libc functions

My functions in this part must have the same prototypes and implement the same behaviors as the originals in their man pages.

| Functions | man page                                                                                                                                  | Functions | man page                                                                                                                                  |
|:---------:|:-----------------------------------------------------------------------------------------------------------------------------------------:|:---------:|:-----------------------------------------------------------------------------------------------------------------------------------------:|
| isalpha   | [man](https://man.freebsd.org/cgi/man.cgi?query=isalpha&sektion=3&manpath=FreeBSD+15.1-RELEASE+and+Ports.quarterly)                       | toupper   | [man](https://man.freebsd.org/cgi/man.cgi?query=toupper&apropos=0&sektion=3&manpath=FreeBSD+15.1-RELEASE+and+Ports.quarterly&format=html) |
| isdigit   | [man](https://man.freebsd.org/cgi/man.cgi?query=isdigit&apropos=0&sektion=3&manpath=FreeBSD+15.1-RELEASE+and+Ports.quarterly&format=html) | tolower   | [man](https://man.freebsd.org/cgi/man.cgi?query=tolower&apropos=0&sektion=3&manpath=FreeBSD+15.1-RELEASE+and+Ports.quarterly&format=html) |
| isalnum   | [man](https://man.freebsd.org/cgi/man.cgi?query=isalnum&apropos=0&sektion=3&manpath=FreeBSD+15.1-RELEASE+and+Ports.quarterly&format=html) | strchr    | [man](https://man.freebsd.org/cgi/man.cgi?query=strchr&apropos=0&sektion=3&manpath=FreeBSD+15.1-RELEASE+and+Ports.quarterly&format=html)  |
| isascii   | [man](https://man.freebsd.org/cgi/man.cgi?query=isascii&apropos=0&sektion=3&manpath=FreeBSD+15.1-RELEASE+and+Ports.quarterly&format=html) | strrchr   | [man](https://man.freebsd.org/cgi/man.cgi?query=strrchr&apropos=0&sektion=3&manpath=FreeBSD+15.1-RELEASE+and+Ports.quarterly&format=html) |
| isprint   | [man](https://man.freebsd.org/cgi/man.cgi?query=isprint&apropos=0&sektion=3&manpath=FreeBSD+15.1-RELEASE+and+Ports.quarterly&format=html) | strncmp   | [man](https://man.freebsd.org/cgi/man.cgi?query=strncmp&apropos=0&sektion=3&manpath=FreeBSD+15.1-RELEASE+and+Ports.quarterly&format=html) |
| strlen    | [man](https://man.freebsd.org/cgi/man.cgi?query=strlen&apropos=0&sektion=3&manpath=FreeBSD+15.1-RELEASE+and+Ports.quarterly&format=html)  | memchr    | [man](https://man.freebsd.org/cgi/man.cgi?query=memchr&apropos=0&sektion=3&manpath=FreeBSD+15.1-RELEASE+and+Ports.quarterly&format=html)  |
| memset    | [man](https://man.freebsd.org/cgi/man.cgi?query=memset&apropos=0&sektion=3&manpath=FreeBSD+15.1-RELEASE+and+Ports.quarterly&format=html)  | memcmp    | [man](https://man.freebsd.org/cgi/man.cgi?query=memcmp&apropos=0&sektion=3&manpath=FreeBSD+15.1-RELEASE+and+Ports.quarterly&format=html)  |
| bzero     | [man](https://man.freebsd.org/cgi/man.cgi?query=bzero&apropos=0&sektion=3&manpath=FreeBSD+15.1-RELEASE+and+Ports.quarterly&format=html)   | strnstr   | [man](https://man.freebsd.org/cgi/man.cgi?query=strnstr&sektion=3)                                                                        |
| memcpy    | [man](https://man.freebsd.org/cgi/man.cgi?query=memcpy&apropos=0&sektion=3&manpath=FreeBSD+15.1-RELEASE+and+Ports.quarterly&format=html)  | atoi      | [man](https://man.freebsd.org/cgi/man.cgi?query=atoi&apropos=0&sektion=3&manpath=FreeBSD+15.1-RELEASE+and+Ports.quarterly&format=html)    |
| memmove   | [man](https://man.freebsd.org/cgi/man.cgi?query=memmove&apropos=0&sektion=3&manpath=FreeBSD+15.1-RELEASE+and+Ports.quarterly&format=html) | calloc    | [man](https://linux.die.net/man/3/calloc)                                                                                                 |
| strlcpy   | [man](https://man.freebsd.org/cgi/man.cgi?query=strlcpy&apropos=0&sektion=3&manpath=FreeBSD+15.1-RELEASE+and+Ports.quarterly&format=html) | strdup    | [man](https://man.freebsd.org/cgi/man.cgi?query=strdup&apropos=0&sektion=3&manpath=FreeBSD+15.1-RELEASE+and+Ports.quarterly&format=html)  |
| strlcat   | [man](https://man.freebsd.org/cgi/man.cgi?query=strlcat&apropos=0&sektion=3&manpath=FreeBSD+15.1-RELEASE+and+Ports.quarterly&format=html) |           |                                                                                                                                           |

### Part 2 - Additional functions

In this second part, I need to write non-standard libc functions, or override existing ones in a different form.

| Function Name     | ft_substr                                                                                                                                                       |
|:----------------- |:--------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Prototype         | char *ft_substr(char const *s, unsigned int start, size_t len)                                                                                                  |
| Parameters        | s: The string from which to create the substring.<br/>start: The start index of the substring in the string ’s’. <br/>len: The maximum length of the substring. |
| Return value      | The substring. NULL if the allocation fails.                                                                                                                    |
| External function | malloc                                                                                                                                                          |
| Description       | Allocates (with malloc(3)) and returns a substring from the string ’s’. <br/> The substring begins at index ’start’ and is of maximum size ’len’.               |

| Function Name      | ft_strjoin                                                                                                           |
| ------------------ | -------------------------------------------------------------------------------------------------------------------- |
| Prototype          | char *ft_strjoin(char const *s1, char const *s2)                                                                     |
| Parameters         | s1: The prefix string.<br/>s2: The suffix string.                                                                    |
| Return value       | The new string. NULL if the allocation fails.                                                                        |
| External functions | malloc                                                                                                               |
| Description        | Allocates (with malloc(3)) and returns a new string, <br/>which is the result of the concatenation of ’s1’ and ’s2’. |

| Function Name      | ft_strtrim                                                                                                                                                 |
| ------------------ | ---------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Prototype          | char *ft_strtrim(char const *s1, char const *set)                                                                                                          |
| Parameters         | s1: The string to be trimmed.<br/>set: The reference set of characters to trim.                                                                            |
| Return value       | The trimmed string. NULL if the allocation fails.                                                                                                          |
| External functions | malloc                                                                                                                                                     |
| Description        | Allocates (with malloc(3)) and returns a copy of ’s1’<br/>with the characters specified in ’set’ removed from<br/>the beginning and the end of the string. |

| Function Name      | ft_split                                                                                                                                                                         |
| ------------------ | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Prototype          | char **ft_split(char const *s, char c)                                                                                                                                           |
| Parameters         | s: The string to be split.<br/>c: The delimiter character.                                                                                                                       |
| Return value       | The array of new strings resulting from the split. NULL if the allocation fails.                                                                                                 |
| External functions | malloc, free                                                                                                                                                                     |
| Description        | Allocates (with malloc(3)) and returns an array of<br/>strings obtained by splitting ’s’ using the character<br/>’c’ as a delimiter. The array must end with a NULL<br/>pointer. |

| Function Name      | ft_itoa                                                                                                                                     |
| ------------------ | ------------------------------------------------------------------------------------------------------------------------------------------- |
| Prototype          | char *ft_itoa(int n)                                                                                                                        |
| Parameters         | n: the integer to convert                                                                                                                   |
| Return value       | The string representing the integer.<br/>NULL if the allocation fails.                                                                      |
| External functions | malloc                                                                                                                                      |
| Description        | Allocates (with malloc(3)) and returns a string<br/>representing the integer received as an argument.<br/>Negative numbers must be handled. |

| Function Name      | ft_strmapi                                                                                                                                                                                                                                                              |
| ------------------ | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Prototype          | char *ft_strmapi(char const *s, char (*f)(unsigned int, char))                                                                                                                                                                                                          |
| Parameters         | s: The string on which to iterate.<br/>f: The function to apply to each character.                                                                                                                                                                                      |
| Return value       | The string created from the successive applications of ’f’.<br/>Returns NULL if the allocation fails.                                                                                                                                                                   |
| External functions | malloc                                                                                                                                                                                                                                                                  |
| Description        | Applies the function ’f’ to each character of the<br/>string ’s’, passing its index as the first argument<br/>and the character itself as the second. A new string<br/>is created (using malloc(3)) to collect the results<br/>from the successive applications of ’f’. |

| Function Name      | ft_striteri                                                                                                                                                                                         |
| ------------------ | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Prototype          | void ft_striteri(char *s, void (*f)(unsigned int, char *))                                                                                                                                          |
| Parameters         | s: The string on which to iterate.<br/>f: The function to apply to each character.                                                                                                                  |
| Return value       | None                                                                                                                                                                                                |
| External functions | None                                                                                                                                                                                                |
| Description        | Applies the function ’f’ on each character of the string passed as argument, <br/> passing its index as first argument. Each character is passed by address to ’f’<br/>to be modified if necessary. |

| Function Name      | ft_putchar_fd                                                              |
| ------------------ | -------------------------------------------------------------------------- |
| Prototype          | void ft_putchar_fd(char c, int fd)                                         |
| Parameters         | c: The character to output.<br/>fd: The file descriptor on which to write. |
| Return value       | None                                                                       |
| External functions | write                                                                      |
| Description        | Outputs the character ’c’ to the given file descriptor.                    |

| Function Name      | ft_putstr_fd                                                               |
| ------------------ | -------------------------------------------------------------------------- |
| Prototype          | void ft_putstr_fd(char *s, int fd)                                         |
| Parameters         | s: The string to output.<br/>fd: The file descriptor on which to write.    |
| Return value       | None                                                                       |
| External functions | write                                                                      |
| Description        | Outputs the string ’s’ to the given file descriptor followed by a newline. |

| Function Name      | ft_putendl_fd                                                              |
| ------------------ | -------------------------------------------------------------------------- |
| Prototype          | void ft_putendl_fd(char *s, int fd)                                        |
| Parameters         | s: The string to output.<br/>fd: The file descriptor on which to write.    |
| Return value       | None                                                                       |
| External functions | write                                                                      |
| Description        | Outputs the string ’s’ to the given file descriptor followed by a newline. |

| Function Name      | ft_putnbr_fd                                                             |
| ------------------ | ------------------------------------------------------------------------ |
| Prototype          | void ft_putnbr_fd(int n, int fd)                                         |
| Parameters         | n: The integer to output.<br/>fd: The file descriptor on which to write. |
| Return value       | None                                                                     |
| External functions | write                                                                    |
| Description        | Outputs the integer ’n’ to the given file descriptor.                    |

### Part 3 - Linked list

In this third part, I have to implement functions using a structure in order to manipulate linked list.

To do so, here is an example of a structure declaration, and I should put the declaration in the libft.h file.

```c
ft_list.h

typedef struct    s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;
```

| Function Name      | ft_lstnew                                                                                                                                                                                         |
| ------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Prototype          | t_list *ft_lstnew(void *content)                                                                                                                                                                  |
| Parameters         | content: The content to store in the new node                                                                                                                                                     |
| Return value       | A pointer to the new node                                                                                                                                                                         |
| External functions | malloc                                                                                                                                                                                            |
| Description        | Allocates memory (using malloc(3)) and returns a new node. <br/>The ’content’ member variable is initialized with the given parameter ’content’. <br/>The variable ’next’ is initialized to NULL. |

| Function Name      | ft_lstadd_front                                                                                                       |
| ------------------ | --------------------------------------------------------------------------------------------------------------------- |
| Prototype          | void ft_lstadd_front(t_list **lst, t_list *new)                                                                       |
| Parameters         | lst: The address of a pointer to the first node of a list.<br/>new: The address of a pointer to the node to be added. |
| Return value       | None                                                                                                                  |
| External functions | None                                                                                                                  |
| Description        | Adds the node ’new’ at the beginning of the list.                                                                     |

| Function Name      | ft_lstsize                             |
| ------------------ | -------------------------------------- |
| Prototype          | int ft_lstsize(t_list *lst)            |
| Parameters         | lst: The beginning of the list         |
| Return value       | The length of the list                 |
| External functions | None                                   |
| Description        | Counts the number of nodes in the list |

| Function Name      | ft_lstlast                         |
| ------------------ | ---------------------------------- |
| Prototype          | t_list *ft_lstlast(t_list *lst)    |
| Parameters         | lst: The beginning of the list     |
| Return value       | Last node of the list              |
| External functions | None                               |
| Description        | Returns the last node of the list. |

| Function Name      | ft_lstadd_back                                                                                                        |
| ------------------ | --------------------------------------------------------------------------------------------------------------------- |
| Prototype          | void ft_lstadd_back(t_list **lst, t_list *new)                                                                        |
| Parameters         | lst: The address of a pointer to the first node of a list.<br/>new: The address of a pointer to the node to be added. |
| Return value       | None                                                                                                                  |
| External functions | None                                                                                                                  |
| Description        | Adds the node ’new’ at the end of the list.                                                                           |

| Function Name      | ft_lstdelone                                                                                                                           |
| ------------------ | -------------------------------------------------------------------------------------------------------------------------------------- |
| Prototype          | void ft_lstdelone(t_list *lst, void (*del)(void *))                                                                                    |
| Parameters         | lst: The node to free.<br/>del: The address of the function used to delete the content.                                                |
| Return value       | None                                                                                                                                   |
| External functions | free                                                                                                                                   |
| Description        | Takes a node as parameter and frees its content using the function ’del’. <br/> Frees the node itself but does NOT free the next node. |

| Funcation Name     | ft_lstclear                                                                                                                                           |
| ------------------ | ----------------------------------------------------------------------------------------------------------------------------------------------------- |
| Prototype          | void ft_lstclear(t_list **lst, void (*del)(void *))                                                                                                   |
| Parameters         | lst: The address of a pointer to a node.<br/>del: The address of the function used to delete the content of the node.                                 |
| Return value       | None                                                                                                                                                  |
| External functions | free                                                                                                                                                  |
| Description        | Deletes and frees the given node and all its successors, <br/>using the function ’del’ and free(3).<br/>Finally, set the pointer to the list to NULL. |

| Function Name      | ft_lstiter                                                                                                   |
| ------------------ | ------------------------------------------------------------------------------------------------------------ |
| Prototype          | void ft_lstiter(t_list *lst, void (*f)(void *))                                                              |
| Parameters         | lst: The address of a pointer to a node.<br/>f: The address of the function to apply to each node’s content. |
| Return value       | None                                                                                                         |
| External functions | None                                                                                                         |
| Description        | Iterates through the list ’lst’ and applies the function ’f’ to the content of each node.                    |

| Function Name      | ft_lstmap                                                                                                                                                                                                                                              |
| ------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| Prototype          | t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))                                                                                                                                                                                |
| Parameters         | lst: The address of a pointer to a node.<br/>f: The address of the function applied to each node’s content.<br/>del: The address of the function used to delete a node’s content if needed.                                                            |
| Return value       | The new list. NULL if the allocation fails.                                                                                                                                                                                                            |
| External functions | malloc, free                                                                                                                                                                                                                                           |
| Description        | Iterates through the list ’lst’, applies the function ’f’ to each node’s content, <br/>and creates a new list resulting of the successive applications of the function ’f’. <br/>The ’del’ function is used to delete the content of a node if needed. |

### Instructions

- Run make to compile the library

- Simple clean that will only remove the object files : make clean

- Full clean that will remove object files as well as the library : make fclean

### Resources

Inevitably, to finish this project, in addition to the man pages, I also check out the following resources：

- [Introduction à Makefile.](https://gl.developpez.com/tutoriel/outil/makefile/#Lno-I)

- [Les Headers](https://yard.onl/sitelycee/cours/c/LesHeaders.html)

- [Bibliotheque standard](https://yard.onl/sitelycee/cours/c/Bibliothquestandard.html)

### Tests

The project has been tested with the following testers:

- [GitHub - SplatchAK/testeur_des_fous](https://github.com/SplatchAFK/testeur_des_fous)

### Description of AI (chat GPT) usage

- explain the functionality, parameters, and return values of certain functions

- understand header files and how to build them

