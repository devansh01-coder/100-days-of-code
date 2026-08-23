// Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main()
{ 
    int a;
    printf("Enter any number");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
    return 0;
}