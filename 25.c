// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include<stdio.h>
int main()
{
    int n;
    float n1,n2,result;
    printf("Enter 1 for +:\n");
    printf("Enter 2 for -:\n");
    printf("Enter 3 for *:\n");
    printf("Enter 4 for /:\n");
    printf("Enter 5 for %%:\n");
    scanf("%d",&n);
    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);
    
    switch (n)
    {
        case 1:
            result = n1 + n2;
            printf("%f\n", result);
            break;
        case 2:
            result = n1 - n2;
            printf("%f\n",result);
            break;
        case 3:
            result = n1 * n2;
            printf("%f\n", result);
            break;
        case 4:
            if (n2 != 0) 
            {
                result = n1 / n2;
                printf("%f\n",result);
            } else 
            {
                printf("Error: Division by zero!\n");
            }
            break;
        case 5:
            if ((int)n2 != 0)
            {
                result = (int)n1 % (int)n2;
                printf("%f\n", result);
            } else {
                printf("Error: Modulus by zero!\n");
            }
            break;
        default:
            printf("Error: Invalid choice!\n");
    }
    return 0;
}