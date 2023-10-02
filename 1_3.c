//Write a program to compute simple interest of given principal amount.
#include<stdio.h>
float simpleintrest(float p, float r, float t)
{
    printf("input principal-");
    scanf("%f",&p);
    printf("input rate-");
    scanf("%f",&r);
    printf("input time-");
    scanf("%f",&t);
    return (p*r*t)/100;
}
int main()
{
    float p,r,t;
    printf("Simple Intrest is %f",simpleintrest(p,r,t));
    return 0;
}
