// Write a program to find area of a circle. Once completed, change  this program to find area & perimeter of triangle as well as rectangle

#include <stdio.h>

    float circle(float r)

    {

        printf("Enter the radius of circle: \n";
        
        scanf("%f", &r);

        return 3.14 * r * r;

    }

    float triangleperimeter(float a, float b, float c)
            // where a,b,c is side of triangle 

    {

        printf("Enter all three sides of triangle: ");

        scanf("%f%f%f", &a, &b, &c); 
        
        return a+b+c;

    }
    float trianglearea(float b , float h)
    {
        printf("enter base and height of triangle: ");
        
        scanf("%f %f",&b,&h);
         
         return 0.5*b*h;
    }

    void rectangle(lm )

{

    float b, l;

    printf("Enter the length and breadth of rectangle: \n");

    scanf("%f%f", &l, &b);

    printf("Area of rectangle= %f\n", l * b);

    printf("Perimeter of triangle= %f", 2 * (l + b));

}

int main()

{

    int r;

    printf("area of circle=%f\n\n", circle(r));
    
    float a, b, c;

    printf("perimeter of triangle%f\n\n",triangleperimeter(a,b,c));
    
     float h;
     printf("area of triangle%f\n\n",trianglearea(b,h));
     

    rectangle();

    return 0;

}
