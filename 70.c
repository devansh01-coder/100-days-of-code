//Rotate an array to the right by k positions.
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

int k;
printf("Enter the value of k: ");
scanf("%d", &k);

k = k % n;
if (k < 0) {
k += n;
}

int temp[n];

for (int i = 0; i < n; i++) {
temp[(i + k) % n] = arr[i];
}

for (int i = 0; i < n; i++) {
arr[i] = temp[i];
}

printf("Array after rotating right by %d positions: ", k);
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");

return 0;
}