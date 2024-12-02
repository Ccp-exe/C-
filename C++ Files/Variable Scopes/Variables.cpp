#include <iostream>
#include <ctime>
using namespace std;

int myNum= 1;

void printNum();

int main(){
    int myNum = 1;
    printNum();
    cout<<::myNum;

    //local variables= declared inside a function or block{}
    //global variables= declared outside of all functions 

    return 0;
}
void printNum(){
    int myNum =51;
    cout<<::myNum;
}