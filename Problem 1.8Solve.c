/*Problem 1.8: 
  Given the values of three variables a,b and c, write a program to compute and display the value of x, where
  x = a/(b-c)
 Excute your program for the following values
 a) a=250,b=85,c=25
 b) a=300,b=70,c=70
 Comment on the output in each case
*/

#include<stdio.h>

int main(){
    //initialize variable
    //case a
    //int a = 250, b = 85, c = 25;

    //case b
    int a = 300, b = 70, c = 70;
    //calculation
    float x = (a/(b-c));
    printf("x = %0.2f",x);

   return 0;
}
