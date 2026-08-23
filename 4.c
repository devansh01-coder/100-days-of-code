// Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
    float r , c,a;
    printf("Enter the radius of circle:");
    scanf("%f", &r);
    a=3.14*r*r;
    c=2*3.14*r;
    printf("Area is: %f \n", a);
    printf("Circumference is: %f", c);
    return 0;
}