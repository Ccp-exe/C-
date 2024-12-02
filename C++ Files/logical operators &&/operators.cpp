#include <iostream>
using namespace std;

int main(){
    int temp;

    cout<<"Enter the temperature: ";

    cin>> temp;

    temp>=0  && temp<45 ? cout << "it is nice weather" : cout << "it is bad/dealdy weather";

    return 0;
}