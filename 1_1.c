//Write a program to read two numbers from user & add, Subtract, Multiply these two numbers.
#include<stdio.h>
void operation(int a,int b)
{
 printf("sum is %d", a+b );
 printf("/ndifference is %d", a-b);
 printf("/nmultiple is %d", a*b);
}
int main() 
{
 int a, b;
 printf("input a: ");
 scanf("%d",&a);
 printf("/ninput b : ");
 scanf("%d",&b);
 operation(a,b);
 return 0;
}
