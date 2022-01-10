#include <stdio.h>
int fact(int n)
{
    int b;
    if(n==0)
    {
        b=1;
    }
    else
    {
        b=n*fact(n-1);
    }
    return b;
}
int main()
{
    int n,r;
    printf("Enter the value of n:");
    scanf("%d",&n);
    r=fact(n);
    printf("%d",r);
    
}
