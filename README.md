<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
<div align="center">
    <img src="https://camo.githubusercontent.com/8088d22551b5dd6d01c76c421c03a440c83d0c1857d0343493e54d69cb358106/68747470733a2f2f6d656469612e67697068792e636f6d2f6d656469612f7a746c3978374a6c68536c55344d574436682f67697068792e676966" width=200px>
</div>
    <h1>Libft</h1>
    <p><strong>Libft</strong> is a custom library in C that replicates several standard C library functions, as well as additional helper functions and data structures. The goal is to create foundational functions that provide essential operations for character manipulation, memory management, string operations, and linked list manipulation.</p>
    <h2>Table of Contents</h2>
    <ol>
        <li><a href="#standard-c-library-replications">Standard C Library Replications</a></li>
        <li><a href="#memory-allocation-functions">Memory Allocation Functions</a></li>
        <li><a href="#additional-functions">Additional Functions</a></li>
        <li><a href="#bonus-linked-list-functions">Bonus Linked List Functions</a></li>
        <li><a href="#How to use?">How to use?</a></li>
    </ol>
    <h2 id="standard-c-library-replications">Standard C Library Replications</h2>
    <p>This section contains functions that replicate the behavior of standard C library functions. They provide functionality to handle characters, strings, and memory operations.</p>
    <h3>Character Checks</h3>
    <ul>
        <li><code>ft_isalpha</code> - Checks if a character is alphabetic.</li>
        <li><code>ft_isdigit</code> - Checks if a character is a digit.</li>
        <li><code>ft_isalnum</code> - Checks if a character is alphanumeric.</li>
        <li><code>ft_isascii</code> - Checks if a character is in the ASCII range.</li>
        <li><code>ft_isprint</code> - Checks if a character is printable.</li>
    </ul>
    <h3>String and Character Operations</h3>
    <ul>
        <li><code>ft_strlen</code> - Returns the length of a string.</li>
        <li><code>ft_strchr</code> - Locates the first occurrence of a character in a string.</li>
        <li><code>ft_strrchr</code> - Locates the last occurrence of a character in a string.</li>
        <li><code>ft_strncmp</code> - Compares up to <code>n</code> characters of two strings.</li>
        <li><code>ft_strnstr</code> - Locates a substring in a string up to <code>n</code> characters.</li>
        <li><code>ft_toupper</code> - Converts a lowercase letter to uppercase.</li>
        <li><code>ft_tolower</code> - Converts an uppercase letter to lowercase.</li>
    </ul>
    <h3>Memory Operations</h3>
    <ul>
        <li><code>ft_memset</code> - Fills memory with a constant byte.</li>
        <li><code>ft_bzero</code> - Writes zeroes to a byte string.</li>
        <li><code>ft_memcpy</code> - Copies <code>n</code> bytes from one memory area to another.</li>
        <li><code>ft_memmove</code> - Copies <code>n</code> bytes from one memory area to another (handles overlap).</li>
        <li><code>ft_memchr</code> - Locates a byte in a memory area.</li>
        <li><code>ft_memcmp</code> - Compares <code>n</code> bytes of two memory areas.</li>
    </ul>
    <h3>String Size Manipulation</h3>
    <ul>
        <li><code>ft_strlcpy</code> - Copies up to <code>size - 1</code> characters to a string, null-terminated.</li>
        <li><code>ft_strlcat</code> - Appends a string to another, up to <code>size - 1</code> characters, null-terminated.</li>
    </ul>
    <h3>Conversion</h3>
    <ul>
        <li><code>ft_atoi</code> - Converts a string to an integer.</li>
    </ul>
    <h2 id="memory-allocation-functions">Memory Allocation Functions</h2>
    <p>These functions utilize <code>malloc()</code> for dynamic memory allocation.</p>
    <ul>
        <li><code>ft_calloc</code> - Allocates and initializes memory to zero for an array of <code>nmemb</code> elements of <code>size</code>.</li>
        <li><code>ft_strdup</code> - Duplicates a string by allocating memory and copying the contents of the string.</li>
    </ul>
    <h2 id="additional-functions">Additional Functions</h2>
    <p>These functions extend the capabilities of <code>libft</code> by offering more string and character operations, output functions, and other utilities.</p>
    <h3>File Descriptor Output</h3>
    <ul>
        <li><code>ft_putchar_fd</code> - Writes a character to a specified file descriptor.</li>
        <li><code>ft_putstr_fd</code> - Writes a string to a specified file descriptor.</li>
        <li><code>ft_putendl_fd</code> - Writes a string followed by a newline to a specified file descriptor.</li>
        <li><code>ft_putnbr_fd</code> - Writes an integer to a specified file descriptor.</li>
    </ul>
    <h3>String Manipulation</h3>
    <ul>
        <li><code>ft_itoa</code> - Converts an integer to a string.</li>
        <li><code>ft_strmapi</code> - Creates a new string by applying a function to each character of an existing string.</li>
        <li><code>ft_striteri</code> - Applies a function to each character of a string, with the character's index as an argument.</li>
        <li><code>ft_substr</code> - Returns a substring starting at a specified index for a given length.</li>
        <li><code>ft_strjoin</code> - Concatenates two strings into a new string.</li>
        <li><code>ft_strtrim</code> - Trims specified characters from the start and end of a string.</li>
        <li><code>ft_split</code> - Splits a string into an array of strings based on a delimiter.</li>
    </ul>
    <h2 id="bonus-linked-list-functions">Bonus Linked List Functions</h2>
    <p>The following functions are used to create and manipulate linked lists. Each function is crafted to perform specific linked list operations.</p>
    <h3>Basic Linked List Operations</h3>
    <ul>
        <li><code>ft_lstnew</code> - Creates a new list element.</li>
        <li><code>ft_lstadd_front</code> - Adds an element to the beginning of a list.</li>
        <li><code>ft_lstsize</code> - Counts the number of elements in a list.</li>
        <li><code>ft_lstlast</code> - Returns the last element of a list.</li>
        <li><code>ft_lstadd_back</code> - Adds an element to the end of a list.</li>
    </ul>
    <h3>Advanced Linked List Manipulations</h3>
    <ul>
        <li><code>ft_lstdelone</code> - Deletes a list element using a function to free the content.</li>
        <li><code>ft_lstclear</code> - Deletes and frees all elements in a list.</li>
        <li><code>ft_lstiter</code> - Iterates over a list and applies a function to each element.</li>
        <li><code>ft_lstmap</code> - Creates a new list by applying a function to each element of an existing list.</li>
    </ul>
    <h3>Utility</h3>
    <ul>
        <li><code>ft_strncpy</code> - Copies a specified number of characters from one string to another.</li>
    </ul>
    <h2 id="How to use?">How to use?</h2>
    <p>To use <code>libft</code>, compile the library and link it to your project:</p>
    <ol>
        <li>Clone the repository and navigate to the directory.</li>
        <li>Run <code>make</code> to compile <code>libft.a</code>.</li>
        <li>Include <code>libft.h</code> in your project files with <code>#include "libft.h"</code> to access function declarations.</li>
        <li>If needed, copy the compiled <code>libft.a</code> file into other projects or link it during compilation to use the library.</li>
    </ol>

</body>
</html>
