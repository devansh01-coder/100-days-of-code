//Perform diagonal traversal of a matrix.#include <stdio.h>

#define ROWS 4
#define COLS 4

int main() {
int mat[ROWS][COLS];

printf("Enter elements of a %dx%d matrix:\n", ROWS, COLS);
for (int i = 0; i < ROWS; i++) {
for (int j = 0; j < COLS; j++) {
scanf("%d", &mat[i][j]);
}
}

printf("Diagonal traversal (zigzag):\n");

for (int d = 0; d < ROWS + COLS - 1; d++) {
int r, c;

if (d % 2 == 0) {
r = (d < ROWS) ? d : ROWS - 1;
c = d - r;
while (r >= 0 && c < COLS) {
printf("%d ", mat[r][c]);
r--;
c++;
}
} else {
c = (d < COLS) ? d : COLS - 1;
r = d - c;
while (c >= 0 && r < ROWS) {
printf("%d ", mat[r][c]);
r++;
c--;
}
}
}

printf("\n");

return 0;
}