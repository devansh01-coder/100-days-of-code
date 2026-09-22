//Count spaces, digits, and special characters in a string.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
char str[1000];
int spaces = 0, digits = 0, special = 0, letters = 0;
int i;

printf("Enter a string: ");
fgets(str, sizeof(str), stdin);

for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
if (str[i] == ' ') {
spaces++;
} else if (isdigit(str[i])) {
digits++;
} else if (isalpha(str[i])) {
letters++;
} else {
special++;
}
}

printf("Spaces: %d\n", spaces);
printf("Digits: %d\n", digits);
printf("Letters: %d\n", letters);
printf("Special Characters: %d\n", special);

return 0;
}