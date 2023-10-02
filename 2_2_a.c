//Using if-else and && operator, find max out of 3 non-distinct numbers.
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter all 3 number - ");
    scanf("%d %d %d",&a, &b, &c);
    if(a>=b && a>=c)
    {
        printf("large number is %d",a);
    }
    else if(b>=a && b>=c)
    {
        printf("large number is %d",b);
    }
    else
    {
        printf("large number is %d",c);
    }
    return 0;
}
