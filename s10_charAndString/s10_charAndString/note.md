# cctype
isalpha(c)  True if c is a letter
isalnum(c)  True if c is a letter or digit
isdigit(c)  True if c is a digit
islower(c)  True if c is a lowercase letter
isprint(c)  True if c is a printable character
ispunct(c)  True if c is a punctuation cahracter
isupper(c)  True if c is a uppercase letter
isspace(c)  True if c is a whitespace 

tolower(c)  returns lowercase of c
toupper(c)  returns lowercase of c

strcpy
strcat
strcpy

** strlen and size_t **
strlen cout until find NULL terminate ('\0') NOT include NULL
    >> return size_t == unsigned long ** don't use this, we don't know what we are dealing with EXAMPLE pass array to function ** 

# cstdlib
convert cstring to int, double, float

# c-style strings
- sequence of char
    - contiguous inmemory
    - implemented as an arr of char
    - terminated by a NULL char >> '\0'
    - referred to as zero or null terminated strings
- string literal
    - sequence of char in double quote >> "arin"
    - constant
    - terminated with null char
