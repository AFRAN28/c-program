#include <stdio.h>

int main()
{
  int i,j,n,m,a[10][10];
  printf("enter th number of elements");
  scanf("%d%d",&m,&n);
  printf("enter the array elements");
  for(i=0;i<n;i++)
  for(j=0;j<m;j++)
  scanf("%d",&a[i][j]);
  printf("array is");
 for(i=0;i<n;i++)
 {
 for(j=0;j<m;j++)
 printf("%d",a[i][j]);
 }
    return 0;
}
