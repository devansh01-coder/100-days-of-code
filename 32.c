//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main(){
int num,rev,rem ;
printf("Enter a number : ");
scanf("%d",&num);
rev = 0;
int org = num;
while(num!=0){
rem = num%10;
rev = rev *10 + rem;
num/=10;
}
printf("reversed number = %d",rev);
if (rev == num){
	printf("number is palindrome.");
}
else {
	printf("not a palindrome number.");
}
return 0;
}
