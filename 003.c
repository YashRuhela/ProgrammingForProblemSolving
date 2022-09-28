/*
 * write a program to determine roots of a quadratic equation
 * */
#include<stdio.h>
#include<math.h>
void main()
{
  int a,b,c;
  float x1,x2;
  printf("ax2 + bx + c = 0\n");
  printf("Enter the value of a = "); scanf("%d",&a);
  printf("Enter the value of b = "); scanf("%d",&b);
  printf("Enter the value of c = "); scanf("%d",&c);
  x1 = (-b+sqrt((b*b)-(4*a*c)))/2*a;
  x2 = (-b-sqrt((b*b)-(4*a*c)))/2*a;
  printf("\nx1 = %.2f\tx2 = %.2f\n",x1,x2);
}
