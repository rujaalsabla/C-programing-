/*
name:Botu Sabla
reg no:ct100/g/26263
*/

#include<stdio.h>

int main(){

//variable declaration 
int option;

//display on the screen
printf("select data bundles:\n");
printf("1. 100MB @ 50KES:\n");
printf("2. 500MB @ 200KES:\n");
printf("3. 1GB @ 350KES:\n");
printf("4. 2GB @ 600KES:\n");

//prompt the user to enter 
printf("enter the option (1_4)");
scanf("%d",&option);

//switch statement 
switch(option){
    case 1:
  printf("you select 100MB. cost kes 50:\n");
    case 2:
  printf("you select 500MB. cost kes 200:\n");
    case 3:
  printf("you select 1GB. cost kes 350:\n");
    case 4:
  printf("you select 2GB. cost kes 600:\n");
   default:
   printf("invalid option");
   }
   
   return 0;
   
  }