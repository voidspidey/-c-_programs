/* Checks a line for unbalanced parenthesis or other types of surrounds */

#include <stdio.h>
#define LINELEN 128
#define TRUE 1
#define FALSE 0
#define START '{'
#define END '}'

int check_paren(const char *line);

int main() {
    char line[LINELEN];

    /* Use puts instead of printf for outputting constant strings. */
    printf("Enter the line:  ");
    fgets(line, sizeof(line), stdin);

    printf("%s\n", line);
    if (check_paren(line) == TRUE)
        puts("Valid Input.");
    else
        puts("Invalid Input.");
    return 0;
}

int check_paren(const char *line) {
    /* Checks if surrounds are balanced in a line.
     * Surrounds can be any two distinct characters like {}, [], () or <>.
     * The surrounds checked are read from macros 'START' and 'END' */
    int i,open, close;
    open = close = 0;

    for (i=0; line[i] != '\0'; i++) {
        if(line[i] == START)
            open++;
        else if(line[i] == END )
            close++;

        if(close > open)
            return 0;
    }

    if (open == close)
        return 1;
    return 0;
}
