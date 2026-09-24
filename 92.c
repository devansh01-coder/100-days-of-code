//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
#include <string.h>

int main() {
char str[200];
int seen[26] = {0};
int i, found = 0;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
str[strcspn(str, "\n")] = '\0';
for (i = 0; str[i] != '\0'; i++) {
if (str[i] >= 'a' && str[i] <= 'z') {
if (seen[str[i] - 'a']) {
printf("First repeating lowercase alphabet: %c\n", str[i]);
found = 1;
break;
}
seen[str[i] - 'a'] = 1;
}
}
if (!found) {
printf("No repeating lowercase alphabet found.\n");
}
return 0;
}