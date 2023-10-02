// Input 2 numbers. Using if (not else)

//(i) If first is bigger add both.

//(ii) If 2ndis bigger subtract.
#include<stdio.h>
int main() 
{
     int a, b;
     printf("Enter first number: ");
     scanf("%d",&a);
     printf("Enter second number: ");
     scanf("%d",&b);
 if(a>=b)
 {
     printf("Sum is %d",a+b);
 }
 if(b>a)
 {
     printf("Difference is %d",b-a);
 }
 return 0;
}
