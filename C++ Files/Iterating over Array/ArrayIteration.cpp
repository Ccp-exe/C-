#include <iostream>
#include <ctime>
using namespace std;


int main(){

    string students[]={"Spongebob","Patrick","Squidward","Sandy"};
    for(int i=0; i < sizeof(students)/sizeof(string);i++){
        cout<< students[i]<<'\n';
    }
    
    
    
    return 0;
}
