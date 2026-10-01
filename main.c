#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
   int num1,num2;
   char op;
   int res;

   printf("enter the calculation  : ");
   scanf("%i %c %i", &num1, &op, &num2);

   if (op == '+')
   {
      res = num1 + num2;
      printf("result is : %i\n", res);
   }
   else if (op == '-')
   {
      res = num1 - num2;
      printf("result is : %i\n", res);
   }
   else if (op == '*')
   {
      res = num1 * num2;
      printf("result is : %i\n", res);
   }
   else if (op == '/')
   {
      if (num2 == 0)
         printf("cannot divide by zero\n");
      else
      {
         res = num1 / num2;
         printf("result is : %i\n", res);
      }
   }
   else
   {
      printf("invalid operator\n");
   }
   
   return 0;

}
