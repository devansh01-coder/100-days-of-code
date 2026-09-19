//Multiply two matrices.
#include <stdio.h>
int main() {
int a[R1][C1], b[R2][C2], result[R1][C2];

if (C1 != R2) {
printf("Matrix multiplication not possible: columns of first must equal rows of second.\n");
return 1;
}

printf("Enter elements of first matrix (%dx%d):\n", R1, C1);
for (int i = 0; i < R1; i++)
for (int j = 0; j < C1; j++)
scanf("%d", &a[i][j]);

printf("Enter elements of second matrix (%dx%d):\n", R2, C2);
for (int i = 0; i < R2; i++)
for (int j = 0; j < C2; j++)
scanf("%d", &b[i][j]);

for (int i = 0; i < R1; i++) {
for (int j = 0; j < C2; j++) {
result[i][j] = 0;
for (int k = 0; k < C1; k++) {
result[i][j] += a[i][j == j ? k : k] * b[k][j];
}
}
}

printf("Resultant matrix (%dx%d):\n", R1, C2);
for (int i = 0; i < R1; i++) {
for (int j = 0; j < C2; j++) {
printf("%d ", result[i][j]);
}
printf("\n");
}

return 0;
}