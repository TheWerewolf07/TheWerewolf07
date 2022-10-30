#include<stdio.h>
main()
{
  int ch;
  float a,b,c;
  printf("1.add\n2.Sub\n3.Mul\n4.Div\n");
  printf("Enter your choice:");
  scanf("%d",&ch);
  printf("\nEnter 2 numbers:");
  scanf("%f%f",&a,&b);
  switch(ch)
  {
  case 1:
  c=a+b;
  printf("addition is:%f",c);
  break;
  case 2:
  c=a-b;
  printf("subtraction is:%f",c);
  }
















}
