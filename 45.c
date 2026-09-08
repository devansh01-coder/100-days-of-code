//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
int n, i;
float sum = 0, term;

printf("Enter number of terms: ");
scanf("%d", &n);

for (i = 1; i <= n; i++) {
term = (2.0 * i) / (4.0 * i - 1);
sum += term;
}

printf("Sum of the series up to %d terms = %.4f\n", n, sum);

return 0;
}