#include <stdio.h>

using namespace std;

int main()
{
    int a,b,c,d;
    printf("enter two numbers (a should be greater than b)-->");
    scanf("%d%d",&a,&b);
    c=a/b;
    d=c*b;
    printf("%d",a-d);
    return 0;
}
