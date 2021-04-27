#include<stdio.h>  
int main(){    
int number=0;    
  
printf("enter a number:");  
scanf("%d",&number);  
  
switch(number){  
case 1:  
printf("number is equal to 10\n");  
case 0:  
printf("number is equal to 50\n");  
default:  
printf("number is not equal to 0 or 1\n");  
}  
return 0;  
}
