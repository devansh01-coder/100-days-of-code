// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main()
{
    float a,b,c;
    
    printf("Enter three sides of a triangle:");
    scanf("%f%f%f",&a,&b,&c);
    
    if(a==b && b==c)
        printf("Triangle is Equilateral");
    else if(a==b || b==c || c==a)
        printf("Triangle is Isosceles");
    else
        printf("Triangle is Scalene");
    
    return 0;
}