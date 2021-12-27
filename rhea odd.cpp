#include<stdio.h>
int main()
{
    int a,n;
    printf("enter the value of a,n");
    scanf("%d",&a);
    for(a=0;a<n;a++)
    if (a%2==0)
    {
        printf("\neven is %d",a);
    }
    else
    {
        printf("\nodd is %d",a);
    }
    return 0;
}
