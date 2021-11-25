
#include <stdio.h>

using namespace std;

int main()
{
    int a,b,c;
    printf("enter a and b-->");
    scanf("%d%d",&a,&b);
    printf("a is %d and b is %d (before swapping)",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n a is %d and b is %d( after swapping)",a,b);
     return 0;
}
