#include <stdio.h>

int main()
{
    char character = 'a';
    while (character <= 'Z') {
        putchar(character);
        character++;
    }
    putchar('\n');
    return 0;
}