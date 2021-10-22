#include <stdio.h>

int fact(int n)
{
    if(n<=1)
    return 1;
    else
    return n*fact(n-1);
}
void main()
{
    int a;
    printf("enter the no");
    scanf("%d",&a);
    printf("factorial is %d",fact(a));
}
