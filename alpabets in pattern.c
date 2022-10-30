#include<stdio.h>
main()
{
  int i,j;
  for(i=65;i<=68;i=i+1)
  {
  for(j=65;j<=i;j=j+1)
  {
  printf("%c",j);
  }
  printf("\n");
  }
}
