//Insert an element in an array at a given position.
#include <stdio.h>

int main() {
int n;
printf("Enter number of elements: ");
scanf("%d", &n);

int arr[n + 1];

printf("Enter %d elements: ", n);
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}

int pos, key;
printf("Enter the position (1 to %d) to insert element: ", n + 1);
scanf("%d", &pos);

printf("Enter the element to insert: ");
scanf("%d", &key);

int i = n - 1;

while (i >= pos - 1) {
arr[i + 1] = arr[i];
i--;
}

arr[i + 1] = key;
n++;

printf("Array after insertion: ");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");

return 0;
}