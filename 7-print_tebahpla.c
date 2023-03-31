#include <stdio.h>

int main(void)
{
    int letter = 'z'; 
    while (letter >= 'a') 
    {
        putchar(letter); 
        letter--; 
    }
    putchar('\n'); 
    return 0;
}