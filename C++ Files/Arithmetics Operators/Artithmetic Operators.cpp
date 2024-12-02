#include <iostream>


int main(){
//arithmetic operators return the reult of a specific arithmetic operation
// It goes in a heirarchy order where first we do 
//parenthesis
//multiplication and division
//addition and subtraction
// when looking at a complicated formula like so:
int students = 6-5+4*3+3;
//int students =20;
//students =students+1; adds n amount 
//students+=5; updates based on number provided after =
//students++; adds 1

//students =students-1; removes n amount 
//students-=5; updates based on number provided after =
//students--; removes 1


//same concepts apply to multiplication and division

//when dividing you will have remainders such as students=20/3
int remainder= students%2;
//% great for finding out if a number is even or odd
std::cout<<"Students: "<< students << "\n";
std::cout<<"Remainder: "<< remainder;
return 0;

}