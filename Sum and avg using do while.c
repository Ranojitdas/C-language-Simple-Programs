/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i,n,sum = 0;
   float avg;
   printf("Enter the no :");
   scanf("%d",&n);
   do{
       sum = sum + i;
       i++;
   }
   while(i<= n);
   avg = sum/n;
   printf("\n  sum : %d",sum);
   printf("\n  avg : %.2f",avg);
   

    return 0;
}

