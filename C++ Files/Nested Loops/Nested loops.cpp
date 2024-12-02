#include <iostream>
using namespace std;
int main(){
//these are nested loops used for array filling and navigating
    int rows;
    int columns;
    char symbol;

    cout<<"How many rows?: ";
    cin>> rows;

    cout<<"How many columns?: ";
    cin>> columns;

    cout<<"enter a symbol to use: ";
    cin>> symbol;

    
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=columns;j++){
            cout<< symbol;        
        }
        cout<<'\n';

    }

    return 0;
}