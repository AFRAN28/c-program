#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
        printf("output is %d %d",a,b);
     return 0;   
    }
