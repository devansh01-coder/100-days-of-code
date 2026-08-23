// Write a program that accepts a percentage (0-100) and assigns a grade based on the given criteria.
#include<stdio.h>
int main()
{
    float p;
    printf("Enter percentage:");
    scanf("%f",&p);
    
    if(p>=90 && p<=100)
        printf("Grade A");
    else if(p>=80 && p<=89)
        printf("Grade B");
    else if(p>=70 && p<=79)
        printf("Grade C");
    else if(p>=60 && p<=69)
        printf("Grade D");
    else if(p>=0 && p<60)
        printf("Grade F");
    else
        printf(" Percentage is invalid");
    
    return 0;
}