/*
name:Botu Sabla
reg no:ct100/g/26263
description:To compute water bill calculator 
*/
#include<stdio.h>

int main(){
//variable declaration 
  int units;
  float water_bill;
  
  //prompt the user to enter units
  printf("enter the units");
  scanf("%d",&units);
  
  //display conditions 
  if("units>=0 && units>=30"){
    water_bill=20*units;
  }else
  if("units>=30 && units>=60"){
    water_bill=25*units;
  }else("units>=60");
    water_bill=30*units;
  
  
  return 0;
  }
    