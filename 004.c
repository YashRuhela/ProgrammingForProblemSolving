/*
 * write a program to input three numbers and find the largest
 * number using nested if
 * */
#include<stdio.h>
void main()
{
  int a,b,c;
  printf("Enter three numbers : "); scanf("%d%2d%2d",&a,&b,&c);
  if(a>b && a>c)
    printf("%d is greatest\n",a);
  else if(b>c && b>a)
    printf("%d is greatest\n",b);
  else 
    printf("%d is greatest\n",c);
}
