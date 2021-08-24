/*Problem 1.7: 
Given two integers 20 and 10 write a program that use a function add() to add
these two numbers and sub() to find the difference of these two numbers and then display the sum and
difference in the following form :
20+10=30
20-10=10
*/

#include<stdio.h>
//function declaration 
int add(int numOne, int numTwo);
int sub(int numOne, int numTwo);
//main function 
int main(){
    int numOne = 20;
    int numTwo = 10;
    printf("%d + %d = %d",numOne,numTwo,add(numOne,numTwo));
    printf("\n%d - %d = %d",numOne,numTwo,sub(numOne,numTwo));
}
//function to add two integers 
int add(int numOne, int numTwo){
    int result = numOne + numTwo;
    return result;
}
//function to substract two integers 
int sub(int numOne, int numTwo){
    int result = numOne - numTwo;
    return result;
}
