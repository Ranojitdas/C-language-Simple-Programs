/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,n,r =0,m;
    printf("Enter the number : ");
    scanf("%d",&n);
    m = n;
    while(n != 0)
    {
        r = r*10 + n%10;
        n = n/10;
    }
    printf("reverse of %d = %d",m,r);

    return 0;
}
