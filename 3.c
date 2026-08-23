// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main()
{
    float l,b,a,p;
    printf("Enter the length and breadth of a rectange:");
    scanf("%f%f", &l, &b);
    a=l*b;
    p=2*(l+b);
    printf("Perimeter is: %f \n", p);
    printf("Area is: %f", a);
    return 0;
}