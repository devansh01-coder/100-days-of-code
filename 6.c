// Q6: Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("Swapped value is:b = %d\n", b);
    printf("Swapped value is:a = %d\n", a);
    return 0;
}