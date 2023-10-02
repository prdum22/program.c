//Find max out of 4 distinct numbers without using && etc..
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter all 4 number = ");
    scanf("%d %d %d %d",&a, &b, &c,&d);
    if(a>=b)
    {
        if(a>=c)
        {
            if(a>=d)
            {
                printf("%d is large number",a);
            }     
            else
            {
                printf("%d is large number",d);
            }
        }
        else
        {
            if(c>=d)
            {
                printf("%d is large number",c);
            }
            else
            {
                printf("%d is large number",d);
            }
        }
    }     
    else
    {
        if(b>=c)
        {
            if(b>=d)
            {
                printf("%d is large number",b);
            }    
            else
            {
                 printf("%d is large number",d);   
            }
        }
        else
        {
            if(c>=d)
            {
                printf("%d is large number",c);
            }
            else
            {
                printf("%d is large number",d);
            }
        }
    }
    return 0;
}
