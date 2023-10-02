//the program such that && etc is not used and multiple if-else are used find max out of 3 distinct numbers.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter all 3 number = ");
    scanf("%d %d %d",&a, &b, &c);
    if(a>=b)
    {
        if(a>=c)
        {
            printf("%d is large number",a);
        }
        else
        {
            printf("%d is large number",c);
        }
    }     
    else
    {
        if(b>=c)
        {
            printf("%d is large number",b);
        }
        else
        {
            printf("%d is large number",c);
        }
    }
    return 0;
}
