#include <iostream>
using namespace std;

int main(){
    //do while loops are loops similar to while lopps however 
    //you first execute a code before checking wether the condition is true or false
    int number;

    do{
        cout<<"Enter a number: ";
        cin>>number;

    }while(number<0);
    

   /*while(1==1){
    cout<<"HELP IM STUCK IN A LOOP";
   }
   cout<< "IM FREE";
   */


    cout<<"The number is "<< number;



    return 0;
}