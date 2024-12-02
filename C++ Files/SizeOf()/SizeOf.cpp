#include <iostream>
#include <ctime>
using namespace std;

int main(){
    //Sizeof() = determines the size in bytes of a: 
    //          variable, data type, class, objects, etc.
    string name="antoni is awesome";
    double gpa= 2.5;
    char grade ='F';
    bool student= true;
    char grades[]= {'A','B','C','D','E','F'};
    string students[]={"Spongebob", "Patrick","Squidward","Sandy","Plankton"};


    cout<< sizeof(students)/sizeof(string)<<" elements\n";

    return 0;

}

