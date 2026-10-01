#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
  	int answer=80;
	int num;
	int trials=0;
	
	do
	{
        printf("guess the number: ");
        scanf("%i", &num);
        
        if (num < answer)
            printf("low!\n");
        else if (num > answer)
		    printf("high!\n");
            
        trials++;
    }
    
    while(num != answer);

	printf("congratulation! trials: %i\n", trials);
	
    return 0;

}

