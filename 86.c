//Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int main() {
char str[1000];
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
int len = strlen(str);
if (len > 0 && str[len - 1] == '\n') {
str[len - 1] = '\0';
len--;
}
int isPalindrome = 1;
for (int i = 0, j = len - 1; i < j; i++, j--) {
if (str[i] != str[j]) {
isPalindrome = 0;
break;
}
}
if (isPalindrome) {
printf("The string is a palindrome.\n");
} else {
printf("The string is not a palindrome.\n");
}
return 0;
}