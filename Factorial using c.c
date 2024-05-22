/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,n,f=1;
    printf("Enter the no : ");
    scanf("%d",&n);
    i =1;
    while (i <= n)
    {
        f = f*i;
        i++;
    }
    printf("\n the factorial of %d = %d",n,f);
    return 0;
}
