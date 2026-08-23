// Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, value, r1, r2; 
    printf("Enter values of a, b, c:");
    scanf("%f%f%f", &a, &b, &c);
    value = b*b - 4*a*c; 
    if(value > 0)
    {
        // value is positive, so we get two different real roots
        r1 = (-b + sqrt(value)) / (2*a);
        r2 = (-b - sqrt(value)) / (2*a);
        printf("The roots are real and different\n");
        printf("Root 1 = %f\n", r1);
        printf("Root 2 = %f", r2);
    }
    else if(value == 0)
    {
        // value is zero, so both roots are the same
        r1 = -b / (2*a);
        printf("The roots are real and equal\n");
        printf("Root = %f", r1);
    }
    else
    {
        // value is negative, so roots are not real numbers
        r1 = -b / (2*a);
        r2 = sqrt(-value) / (2*a);
        printf("The roots are imaginary\n");
        printf("Root 1 = %f + %f\n", r1, r2);
        printf("Root 2 = %f - %f", r1, r2);
    }
    return 0;
}