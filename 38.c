//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main() {
int num, originalNum, remainder, sum = 0;
printf("Enter an integer: ");
scanf("%d", &num);
originalNum = num;
if (num < 0) {
num = -num;
}
while (num != 0) {
remainder = num % 10;
sum += remainder;
num /= 10;
}
printf("Sum of digits of %d = %d\n", originalNum, sum);
return 0;
}