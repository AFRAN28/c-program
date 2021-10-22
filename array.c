#include <stdio.h>

int main()
{
  int i,j,n,a[10];
  printf("enter th number of elements");
  scanf("%d",&n);
  printf("enter the array elements");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("array is");
 for(i=0;i<n;i++)
 printf("%d",a[i]);
    return 0;
}
