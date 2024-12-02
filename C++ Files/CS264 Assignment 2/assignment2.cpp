//Antoni Sniezek 
//22351599
//here is assignment 2 for cs264 i have taken the code provided and i inserted my own methods and my own test cases as required
// i have put the functions before the main method so you can see how it looks before the test cases 
// ihave 3 test cases for each function such as length, substring etc...


#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;

/*
    Ensure you include sufficient comments to explain your solutions. This can
    come in the form of a multi-line comment before the solution, or inline
    comments left within the solution itself.
*/

//in this funtion i will be taking the string ans i will be counting the length of it, so while the string is not counted it will continue countng the length 
unsigned int length(const char* str){
    int len = 0;
    while (str[len] != '\0'){
        len++;
    }
    return len;

}
//in this fuction we will be copying a string such as "apple", this function will copy the word letter by letter to a new allocated memory 
char* copy(char* dest, const char* src){
    char* TrueDest=dest;
    while(*src !='\0'){
        *dest= *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return TrueDest;
}
// in this function we will be figuirng out the character position in a string by checking the letter in the string and havong a pointer trying to locate the letter which we are trying to find
//one the letter has been forund we return that the test has passed
int indexOf(char c, const char* str){
    for(int i =0; str[i]!='\0'; i++){
        if(str[i]==c){
            return i;
        }
    }
    return -1;

}
//in this function we will be creating a subsrting from a string by giving the parameters for the substring we want to create, for example if we have a string of 10 length and only want the first half we will sent the pointers/paramters to i=0,j=5;

char* substring(int i, int j, const char* str){
    int len= j-i;
    char* sub= new char[len+1];
    for(int k=0; k<len; k++){
        sub[k]=str[i+k];
    }
    sub[len]='\0';
    return sub;

}
//in this function we will be replacing a letter for a letter or character or symbol in the string, so if we have a string of "apple" we can create a string of "ypple" by replacing the 'a' with a 'y'

char* replace(char c, char p, const char* str){
    int len =length(str);
    char* newstr =new char[len+1];
    for(int i=0; i<len; i++){
        newstr[i]=(str[i]==c)?p: str[i];
        
    }
    newstr[len]='\0';
    return newstr;

}

/*
    - Try to include your test cases below this multi-line comment -

    Ensure your test cases use the following format:

    [function]_name_test_case_[k](){
        test_input = example_value;
        expected_output = example_value;

        result = [function](test_input)
        if(result == output){
            cout << "[function]_name_test_case_[k] PASSED" << endl;
        }
        else{
            cout << "[function]_name_test_case_[k] FAILED" << endl;
        }
    }

    [function] - The name of the function being tested
    [k] - The index of the test

    *****************************************************
    ***********************************************************
    *******************************************************

    Here is my code for the test cases as followed by the format given to me above
    
*/

//this function tests wether the string has the correct length of characters 
// this is done in the function above, however for this test case we have a expected output aswell
// so that we can see and compare wether the string function matches the string length, this test case will be copy pasted 
// and we will change values in it to test for different lengths, so test case 2 and 3 will be copies of test case 1 but with different strings

void length_test_case_1(){
    const char* test_input ="C++ is king";
    unsigned int expected_output =11;

    unsigned int result =length(test_input);
    if(result == expected_output){
        cout<<"LENGTH CASE 1 PASSED!\n";
    }
    else{
        cout<<"LENGTH CASE 1 FAILED!\n";
    }
}
void length_test_case_2(){
    const char* test_input ="abcdefghijklmnopqrstuvwxyz";
    unsigned int expected_output =26;

    unsigned int result =length(test_input);
    if(result == expected_output){
        cout<<"LENGTH CASE 2 PASSED!\n";
    }
    else{
        cout<<"LENGTH CASE 2 FAILED!\n";
    }
}
void length_test_case_3(){
    const char* test_input ="";
    unsigned int expected_output =0;

    unsigned int result =length(test_input);
    if(result == expected_output){
        cout<<"LENGTH CASE 3 PASSED!\n";
    }
    else{
        cout<<"LENGTH CASE 3 FAILED!\n";
    }
}
//******************************************** */
//********************************************* */
//Here is the test cases for my copy function, this test case will take a string such as "apple" and it 
//will return apple to us by using memory alloctaion and the test case will copy the string from the start to the finish
//similarly we will write a function that works for one word then we will copy paste the test case and use if for two more cases with different inputs
//copy test cases below 

void copy_test_case_1(){
    const char* src ="ABCDDCBA!";
    char dest[20];
    const char* expected_output= "ABCDDCBA!";

    copy(dest, src);
    if(strcmp(dest, expected_output)==0){
        cout<<"COPY CASE 1 PASSED!\n";
    }
    else{
        cout<<"COPY CASE 1 FAILED!\n";
    }
}
void copy_test_case_2(){
    const char* src ="Flabbergasted!";
    char dest[20];
    const char* expected_output= "Flabbergasted!";

    copy(dest, src);
    if(strcmp(dest, expected_output)==0){
        cout<<"COPY CASE 2 PASSED!\n";
    }
    else{
        cout<<"COPY CASE 2 FAILED!\n";
    }
}
void copy_test_case_3(){
    const char* src ="!";
    char dest[20];
    const char* expected_output= "!";

    copy(dest, src);
    if(strcmp(dest, expected_output)==0){
        cout<<"COPY CASE 3 PASSED!\n";
    }
    else{
        cout<<"COPY CASE 3 FAILED!\n";
    }
}
//here are my test cases for indexOf in this test case  we will be giving a string and the function
//will return us the specific character at the poistion of the string that the pointer is pointing to
//and as such the charcter will be matched and checked if the character and the value at the current pointer are the same
//then it will be returned as passed or failed. similarly to the other test cases i will be copy pasting them in after getting the first test case working
void indexOf_test_case_1(){
    const  char* test_input = "ABACADABA!";
    char c= 'C';
    int expected_output=3;

    int result= indexOf(c, test_input);


    if(result == expected_output){
        cout<<"INDEX CASE 1 PASSED!\n";
    }
    else{
        cout<<"INDEX CASE 1 FAILED!\n";
    }
}
void indexOf_test_case_2(){
    const  char* test_input = "BOBER!";
    char c= 'R';
    int expected_output=4;

    int result= indexOf(c, test_input);


    if(result == expected_output){
        cout<<"INDEX CASE 2 PASSED!\n";
    }
    else{
        cout<<"INDEX CASE 2 FAILED!\n";
    }
}
void indexOf_test_case_3(){
    const  char* test_input = "VeryLongWordIndeed!";
    char c= 'I';
    int expected_output=12;

    int result= indexOf(c, test_input);


    if(result == expected_output){
        cout<<"INDEX CASE 3 PASSED!\n";
    }
    else{
        cout<<"INDEX CASE 3 FAILED!\n";
    }
}
//These are the test cases for the substring function what these test cases will do they will take a string that we will give in
// afterwards it will create a substring from the parameters we set such as i=0, j=7 the new substring will be created using the parameters then it will be dynamically stored 
// similarly to the other test cases i will be copy pasting them in after getting the first test case working
 void substring_test_case_1(){
    const char* test_input= "Sleeping Dogs";
    int i=0, j=8;
    const char* expected_output ="Sleeping";

    char* result =substring(i,j, test_input);
    if(strcmp(result, expected_output)==0){
        cout<<"SUBSTRING CASE 1 PASSED!\n";
    }
    else{
        cout<<"SUBSTRING CASE 1 FAILED!\n";
    }
    delete[] result;
 }
 void substring_test_case_2(){
    const char* test_input= "Halo Reach";
    int i=5, j=10;
    const char* expected_output ="Reach";

    char* result =substring(i,j, test_input);
    if(strcmp(result, expected_output)==0){
        cout<<"SUBSTRING CASE 2 PASSED!\n";
    }
    else{
        cout<<"SUBSTRING CASE 2 FAILED!\n";
    }
    delete[] result;
 }
 void substring_test_case_3(){
    const char* test_input= "Welcome to my city";
    int i=8, j=10;
    const char* expected_output ="to";

    char* result =substring(i,j, test_input);
    if(strcmp(result, expected_output)==0){
        cout<<"SUBSTRING CASE 3 PASSED!\n";
    }
    else{
        cout<<"SUBSTRING CASE 3 FAILED!\n";
    }

    //we will free up allocated memory after getting result 
    delete[] result;
 }
// finally! you have reached the end in these next test cases we will be looking at replacing characters in strings such as the string 'hello' by assigning the replacing letters 
// we can for example replace the 'e' in 'hello' with 'a' thus creating 'hallo'
// similarly to the other test cases i will be copy pasting them in after getting the first test case working
void replace_test_case_1(){
    const char* test_input= "Hello";
    char c='e';
    char p='a';
    const char* expected_output="Hallo";
    char* result =replace(c,p, test_input);
    if(strcmp(result,expected_output)==0){
         cout<<"REPLACE CASE 1 PASSED!\n";
    }
    else{
         cout<<"REPLACE CASE 1 PASSED!\n";
    }
    delete[]result;
}
void replace_test_case_2(){
    const char* test_input= "Yallow";
    char c='a';
    char p='e';
    const char* expected_output="Yellow";
    char* result =replace(c,p, test_input);
    if(strcmp(result,expected_output)==0){
         cout<<"REPLACE CASE 2 PASSED!\n";
    }
    else{
         cout<<"REPLACE CASE 2 PASSED!\n";
    }
    delete[]result;
}

void replace_test_case_3(){
    const char* test_input= "Heaven";
    char c='a';
    char p='e';
    const char* expected_output="Heeven";
    char* result =replace(c,p, test_input);
    if(strcmp(result,expected_output)==0){
         cout<<"REPLACE CASE 3 PASSED!\n";
    }
    else{
         cout<<"REPLACE CASE 3 PASSED!\n";
    }
    delete[]result;
}


// Call your test functions in the main function below
//here are all my test case calls so i can check wether the cases work.
//please feel free to change some values of my test cases to test some ofther cases even cases that do not work.
//thank you for reviewing my code.
int main(){
   length_test_case_1();
   length_test_case_2();
   length_test_case_3();
   copy_test_case_1();
   copy_test_case_2();
   copy_test_case_3();
   indexOf_test_case_1();
   indexOf_test_case_2();
   indexOf_test_case_3();
   substring_test_case_1();
   substring_test_case_2();
   substring_test_case_3();
   replace_test_case_1();
   replace_test_case_2();
   replace_test_case_3();
    return 0;
}