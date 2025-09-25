/*
name:Botu sabla galgalo 
reg:ct100/g/26263
description:program to compute surface_area
S_A=2pi×radius×radius+2pi×radius ×height
*/

#include<stdio.h>

int main(){
//variable declaration 
float volume,height,surface_area, radius;
float pi=3.142;

//prompt the user to enter height 
printf("enter the height");
scanf("%f",&height);

//prompt the user to enter the radius 
printf("enter the radius");
scanf("%f",&radius );

//compute volume of cylinder 
volume =pi*radius*radius*height;

//compute surface_area of a cylinder 
surface_area =(2*pi*radius)+(radius +height);

//display the results
printf("the volume is:%f\n",volume);
printf("the surface_area is:%f\n",surface_area);

return 0;
}
    