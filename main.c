#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
    int count=0;
    char c;

    printf("input a string: ");

    while ( (c = getchar()) != '\n' ) 
    {
        if (c >= '0' && c <= '9')
            count++;
    }
    printf("the number of digits is %i!\n", count);

    return 0;
}
