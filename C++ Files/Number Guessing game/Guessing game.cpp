#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int num;
    int guess;
    int tries;

    (srand(time(NULL)));
    num=(rand()%100)+1;
    cout<<"*********Number Guessing Game*********\n";

    do{
        cout<<"Enter a guess between (1-100)\n";
        cin>>guess;
        tries++;
        if(guess<num){
            cout<<"you have guessed to low\n";
        }else if(guess>num){
            cout<<"you have guessed to high\n";
        }
        else{
            cout<<"The number was "<<num;
            cout<<'\n';
            cout<<"you have guessed correct!! it took you " << tries<<" tries\n";
        }
    }while(guess!=num);
    cout<<"***************************************";


    return 0;
}