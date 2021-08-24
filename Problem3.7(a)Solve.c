/*
Problem3.7(a)Solve:
Write down the c program of the given formula- 
Area = PI*R*R+2*PI*R*H

*/


#include<stdio.h>
#include<math.h>

//define constant value pi
#define PI 3.1416

//main function
int main(){

    float r,h,area;  //r=radius and h = height

    printf("Enter the value of radius: ");
    scanf("%f",&r);
    
    printf("Enter the height: ");
    scanf("%f",&h);
    
    //calculation
    area = ((PI*pow(r,2))+ (2*PI*r*h));
    
    //output
    printf("Area = %0.3f",area);

    return 0;
}

