#include <iostream>
using namespace std;
 
int main(){

    int age;
    cout <<"enter your age: ";
    cin >> age;

    if(age>= 18){
        cout<<"welcome to the site!";
    }
    else if(age<0){
        cout<< "you were not born yet";

    }
    else
    {
        cout << "you are too old for this site";
    }

    return 0;
}