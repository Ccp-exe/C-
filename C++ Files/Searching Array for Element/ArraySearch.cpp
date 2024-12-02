#include <iostream>
#include <ctime>
using namespace std;
int searchArray(string array[],int size, string element);
int main(){
   // int numbers[]={1,2,3,4,5,6,7,8,9,10};
    string characters[] ={"Spongebob","Squidward","Sandy","Plankton"};
    int size =sizeof(characters)/sizeof(characters[0]);
    int index;
    string myChar;

    cout<<"Enter Element To Search For: \n";
    getline(cin,myChar);

    index=searchArray(characters,size,myChar);

    if(index !=-1){
        cout<<myChar<<" is at index "<<index;
    }
    else{
        cout<<myChar<< " is not in the array";
    }

}

int searchArray(string array[],int size, string element){
    for(int i=0; i<size;i++){
        if(array[i]==element){
            return i;
        }
        
    }
    return -1;
}