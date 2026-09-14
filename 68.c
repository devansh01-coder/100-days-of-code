//Delete an element from an array.
#include <stdio.h>

int main() {
int n;
printf("Enter number of elements: ");
scanf("%d", &n);

int arr[n];

printf("Enter %d elements: ", n);
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}

int pos;
printf("Enter the position (1 to %d) to delete element: ", n);
scanf("%d", &pos);

if (pos < 1 || pos > n) {
printf("Invalid position.\n");
return 1;
}

int i = pos - 1;

while (i < n - 1) {
arr[i] = arr[i + 1];
i++;
}

n--;

printf("Array after deletion: ");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");

return 0;
}