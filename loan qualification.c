/*
#include<stdio.h>

*/
int main() {
   //variable declaration 
   int age;
   float income;
//prompt the user to enter age
printf("enter the age");
scanf("%d",&age);

//prompt the user to enter income 
printf("enter the income");
scanf("%f",&income);

//display the results 
if(age>=21 & income>=21000){
printf("congratulations you qualify for loan/n");
}else{
printf("unfortunately, we are unable to offer you a loan at this time");
}
return 0;
}