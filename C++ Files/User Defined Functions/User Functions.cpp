#include <iostream>
#include <ctime>
using namespace std;

void happyBirthday(string name, int age);


int main(){
    //function = is a block of resuable code that can be used later
    string name;
    cout<<"please enter your name\n";
    cin>>name;
    int age;
    cout<<"please enter your age\n";
    cin>>age;


    happyBirthday(name,age);

    return 0;
}

void happyBirthday(string name,int age){
    cout<<"Happy Birthday to "<<name<< " you are "<<age<< " years old\n";
    cout<<"Happy Birthday to "<<name<< " you are "<<age<< " years old\n";
    cout<<"you smell like a monkey\n";
    cout<<"and you look like one too\n";
}
