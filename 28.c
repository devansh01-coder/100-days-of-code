// Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
int main()
{
    int i,n, pro=1;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++)
    {
        pro*=2*i;
    }
    printf("Product of first %d even numbers = %d\n", n, pro);
    
    return 0;
}