/* putchar */
void _putchar(char c);
/* 0-mem set */
char *_memset(char *s, char b, unsigned int n);

/* copy memory */
char *_memcpy(char *dest, char *src, unsigned int n);

/* locate a character in string */
char *_strchr(char *s, char c);
/* gets the length of a prefix substring */
unsigned int _strspn(char *s, char *accept);
/* searches a string for any of a set of bytes. */
char *_strpbrk(char *s, char *accept);

/* function that locates a substring. */
char *_strstr(char *haystack, char *needle);

/* function that prints the chessboard. */
void print_chessboard(char (*a)[8]);

/* sum of the two diagonals of a square matrix of integers */
void print_diagsums(int *a, int size);

/*  */
void set_string(char **s, char *to);
