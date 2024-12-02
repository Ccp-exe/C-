#include <iostream>
#include <ctime>
using namespace std;

int main(){
    // foreach loop= loop that eases the traversal over an 
    //                 iterable data set 

    int grades[]= {65,72,81,93};
    string students[]={"Spongebob","Patrick","Squidward","Sandy","Plankton"};
    for(string student :students){
        cout<< student<<"\n";
        for(int grade:grades){
            cout<<student <<grade<<'\n';
        }
        
    }
    return 0;
}