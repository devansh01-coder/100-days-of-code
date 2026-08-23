// Write a program to display the month name and number of days using switch-case for a given month number.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number from 1-12 :");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("JANUARY\n");
            printf("31DAYS");
            break;
        case 2:
            printf("FEBRUARY\n");
            printf("28DAYS");
            break;
        case 3:
            printf("MARCH\n");
            printf("31DAYS");
            break;
        case 4:
            printf("APRIL\n");
            printf("30DAYS");
            break;
        case 5:
            printf("MAY\n");
            printf("31DAYS");
            break;
        case 6:
            printf("JUNE\n");
            printf("30DAYS");
            break;
        case 7:
            printf("JULY\n");
            printf("31DAYS");
            break;
        case 8:
            printf("AUGUST\n");
            printf("31DAYS");
            break;
        case 9:
            printf("SEPTEMBER\n");
            printf("30DAYS");
            break;
        case 10:
            printf("OCTOBER\n");
            printf("31DAYS");
            break;
        case 11:
            printf("NOVEMBER\n");
            printf("30DAYS");
            break;
        case 12:
            printf("DECEMBER\n");
            printf("31DAYS");
            break;
        default:
            printf("Invalid number");
    }
    return 0;
}