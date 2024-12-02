#include <iostream>
int main(){
//type conversion is the conversion of one value to another 
/*
Implicit= automatic conversion
Explicit= precede the value with the new data type (int or new data type) 
put it before a variable or value 

*/
//int x=3.14; this will cut off the .14 as its not an int
//so instead we will use double

//double x=3.14;

//what would happen if i cast 3.14 as an int and then assign it into a double variable 

//double x= (int)3.14;
//this means i will convert 3.14 into an integer and then store it in x
//result =3
//char x=100;
//this will convert the number to the position 100 of the ascii table result being d
//it could also be formatted like this:
//std:;cout<<(char)100; result is d
/*
this can be usful when calculating percentage of correct question / total questions
*/


int correct =8;
int questions=10;
double score = correct/(double)questions *100;
std::cout<< score <<"%";
//std::cout <<x;

return 0;

}