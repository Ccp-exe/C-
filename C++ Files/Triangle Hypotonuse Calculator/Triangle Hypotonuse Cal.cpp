#include <iostream>
#include <cmath>
using namespace std;


int main(){
    double a;
    double b;
    double c;
    cout<<"Enter Length for Side A: ";
    cin>>a;
    cout<< "Enter Length for Side B: ";
    cin>>b;

    //this is formula for hypotonuse calculator
    
    //a= pow(a,2);
    //b= pow(b,2);
    //c=sqrt(a+b);

    //alternatively this formula can be used
    c=sqrt(pow(a,2) + pow(b,2));

    cout<<c;
}

