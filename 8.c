// Q8: Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum of n natural numbers is: %d", sum);
    return 0;
}