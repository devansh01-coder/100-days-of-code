//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main(){
int num,rem1 , rev,rem2,raw_rev,num2;
printf("Enter a number: ");
scanf("%d",&num);
raw_rev = 0;
while (num!=0){
	rem1 = num%2;
	raw_rev = raw_rev*10+rem1;
	num = num/2;
}
printf("raw binary representation : %d\n",raw_rev);
num2 = raw_rev;
rev = 0;
while(num2!=0){
    rem2 = num2%10;
    rev = rev*10+rem2;
    num2 = num2/10;
    
}
printf("final binary representation : %d",rev);
return 0;
}
		
