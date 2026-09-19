//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

#define N 4

int main() {
int mat[N][N];
int sum = 0;

printf("Enter elements of a %dx%d matrix:\n", N, N);
for (int i = 0; i < N; i++) {
for (int j = 0; j < N; j++) {
scanf("%d", &mat[i][j]);
}
}

for (int i = 0; i < N; i++) {
sum += mat[i][i];
}

printf("Sum of main diagonal elements = %d\n", sum);

return 0;
}