#include<stdio.h>

main()
{
    int a,b,c;
    printf("Enter 3 number");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b && a>c)
    {
      printf("A is MAX");
    }
    else if(b>a && b>c)
    {
       printf("B is MAX");
    }
    else
    {
       printf("C is MAX");
    }
}







