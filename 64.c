//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
#include <stdlib.h>

int main() {
int n;
printf("Enter an integer number: ");
scanf("%d", &n);

if (n < 0) {
n = -n;
}

int count[10] = {0};

if (n == 0) {
count[0] = 1;
} else {
int temp = n;
while (temp != 0) {
int digit = temp % 10;
count[digit]++;
temp = temp / 10;
}
}

int maxCount = 0;
int maxDigit = 0;

for (int i = 0; i <= 9; i++) {
if (count[i] > maxCount) {
maxCount = count[i];
maxDigit = i;
}
}

printf("Digit occurring most frequently: %d (occurs %d times)\n", maxDigit, maxCount);

return 0;
}