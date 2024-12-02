#include <iostream>
using namespace std;

int main(){
    //break = break out of a loop or switch statement
    //continue = skip the iteration by assigning the value to be skipped 

    for(int i=0; i<=20;i++){
        //here we will skip the number 13 as it is a unlucky number.
        
        if(i==13){
            continue;
        }   
        cout<<i<<'\n';
    }

    return 0;
}