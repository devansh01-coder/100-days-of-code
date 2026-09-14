//Search for an element in an array using linear search.
#include <stdio.h>
int main(){
int n ,i , num , found =0 , pos, a7[20];
printf("Enter the number of elements : ");
scanf("%d",&n);
printf("Enter the elements : ");
for (i=0;i<n; i++){
scanf("%d",&a7[i]);
}
printf("Enter the number to be searched : ");
scanf("%d",&num);
pos = -1;
for(i=0;i<n; i++){
    if(a7[i]==num){
        found = 1 ;
        pos = i ;
        break;
    }
    
}
if(found==1){
    printf("element found at %d",pos);
}
else{
    printf("element not found!");
}

return 0;
}