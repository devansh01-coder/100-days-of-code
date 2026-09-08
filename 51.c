/* Write a program to print the following pattern:
    5
   45
  345
 2345
12345 */
#include <stdio.h>

int main() {
int rows = 5, i, j;

for (i = 1; i <= rows; i++) {
for (j = 1; j <= rows - i; j++) {
printf(" ");
}
for (j = rows - i + 1; j <= rows; j++) {
printf("%d", j);
}
printf("\n");
}

return 0;
}