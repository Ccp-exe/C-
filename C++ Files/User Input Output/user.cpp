#include <iostream>
using namespace std;

int main(){
    string name;
    int age;
    cout<<"Whats your name?: ";
    getline(cin>>ws,name);
    cout<<"Whats your age?: ";
    cin>> age;
    cout<<"Hello "<<name<< "\n";
    cout<<"you are "<< age <<" years old"; 
    return 0;
}