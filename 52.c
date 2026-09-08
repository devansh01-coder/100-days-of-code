/* Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*  */
#include <stdio.h>

int main() {
int rows = 5, i, j, k;
int mid = (rows + 1) / 2;
int stars;

for (i = 1; i <= rows; i++) {
if (i <= mid) {
stars = 2 * i - 1;
}