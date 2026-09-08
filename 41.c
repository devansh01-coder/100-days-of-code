//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
int num, originalNum, firstDigit, lastDigit, numDigits;
int result;

printf("Enter an integer: ");
scanf("%d", &num);

originalNum = num;

if (num < 0) {
num = -num;
}

lastDigit = num % 10;

numDigits = (int)log10(num) + 1;
firstDigit = num / (int)pow(10, numDigits - 1);

result = num - (firstDigit * (int)pow(10, numDigits - 1)) - lastDigit;
result = result + (lastDigit * (int)pow(10, numDigits - 1)) + firstDigit;

if (originalNum < 0) {
result = -result;
}

printf("Original number: %d\n", originalNum);
printf("Number after swapping first and last digit: %d\n", result);

return 0;
}