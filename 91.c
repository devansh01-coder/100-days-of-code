//Remove all vowels from a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
char str[200];
int i, j = 0;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
str[strcspn(str, "\n")] = '\0';
for (i = 0; str[i] != '\0'; i++) {
char c = tolower(str[i]);
if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
str[j++] = str[i];
}
}
str[j] = '\0';
printf("String without vowels: %s\n", str);
return 0;
}