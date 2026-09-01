//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main(){
int num , arm , rem , rev;
printf("Enter a number : ");
scanf("%d",&num);
arm =0 ;
int n = num ;
while (num!=0){
	rem = num%10;
	arm = (rem*rem*rem)+arm;
	num /=10;
}
printf("%d\n",arm);
if (arm == n){
	printf("it is a armstrong number.");
}
else{
	printf("not an armstrong number.");
}
return 0;
}


