#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num;
	
	printf("input a integer : ");
	scanf("%i",&num);
	
	if (num>=0)
		printf("absolute value : %d.\n", num);
    else
        printf("absolute value : %d.\n", -num);

return 0;
}
