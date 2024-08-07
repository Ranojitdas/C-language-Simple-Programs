/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a = 0 , b = 1, i =1, c,n;
    printf("Enter the no :",n);
    scanf("%d",&n);
    printf("%d \t %d",a,b);
    while(i<=n)
    {
        c = a + b;
        printf("\t %d",c);
        a = b;
        b = c;
        i++;
        
        
    }

    return 0;
}
