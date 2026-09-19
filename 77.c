//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

#define N 4

int main() {
int mat[N][N];
int seen[1000] = {0};
int distinct = 1;

printf("Enter elements of a %dx%d matrix:\n", N, N);
for (int i = 0; i < N; i++) {
for (int j = 0; j < N; j++) {
scanf("%d", &mat[i][j]);
}
}

for (int i = 0; i < N; i++) {
int val = mat[i][i];
if (val < 0 || val >= 1000) {
printf("Value out of supported range for this check.\n");
return 1;
}
if (seen[val]) {
distinct = 0;
break;
}
seen[val] = 1;
}

if (distinct)
printf("Diagonal elements are distinct.\n");
else
printf("Diagonal elements are NOT distinct.\n");

return 0;
}