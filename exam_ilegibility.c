/*
name:Botu Sabla
reg no:ct100/g/26263
description:To compute exam eligibility for a student 
*/
#include<stdio.h>

int main(){
//variable declaration 
 int attendance,average_marks ;

//prompt the user to enter attendance 
printf("enter attendance");
scanf("%d",&attendance);

//prompt the user to enter average_marks 
printf("enter average_marks");
scanf("%d",&average_marks);

//display conditions 
if(attendance>=75 && average_marks>=40){
printf("you are legible for exam\n");
}else{
printf("you are not legible for exam");

}
return 0;
}

