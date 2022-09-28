/*
 * write a program to recieve marks of physics, chemistry, maths
 * from the user & check its eligiblity for the course
 * a) marks of physics > 40
 * b) marks of chemistry > 50
 * c) marks of maths > 60
 * d) total marks of physics and maths > 150
 * or 
 * e) total of three subjects > 200*/
#include<stdio.h>
void main()
{
  float p,c,m;
  printf("Enter marks in physics : "); scanf("%f",&p);
  printf("Enter marks in chemistry : "); scanf("%f",&c);
  printf("Enter marks in mathematics : "); scanf("%f",&m);
  if(p>40 && c>50 && m>60 && ((p+m)>150 || (p+c+m)>200))
    printf("Student is eligible for course");
  else 
    printf("Student is not eligible for the course");
}
