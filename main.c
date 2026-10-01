#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
   int num;
   int sum=0;
   int i;

   printf("input a number : ");
   scanf("%i", &num);
   
   for (i=1; i<=num; i++)
   { 
    sum= sum+i;
   }
		
	printf("the result is %i\n", sum);
	
    return 0;
}
