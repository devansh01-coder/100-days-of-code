//Count vowels and consonants in a string.
#include <stdio.h>
#include <ctype.h>

int main() {
int vowels = 0, consonants = 0;
char str[1000];
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
char ch = tolower(str[i]);
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
vowels++;
} else if (ch >= 'a' && ch <= 'z') {
consonants++;
}
}
printf("Vowels: %d\n", vowels);
printf("Consonants: %d\n", consonants);
return 0;
}