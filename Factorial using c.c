
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
