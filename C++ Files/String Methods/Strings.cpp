#include <iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter your name: ";
    getline(cin,name);
//String length 
    /*if(name.length()>20){
        cout<<"your name cannot be greater than 12 characters";
    }
    else{
        cout<<"Welcome! "<< name;

    }
*/

//empty string checker
    /*if(name.empty()){
        cout<<" you did not enter your name!";
    }
    else{
        cout<<"Hello "<<name;
    }
    return 0;
    */

//Method for clearing a string 
   /*name.clear();

   cout<<"Hello "<<name;
   */
//method for addign string to another string 
    /*name.append("@Gmail.com");
    cout<<"Your email address is now "<<name;
    */
    //result= antonisniezek@gmail.com

//method for returning char at given position in string
/*
cout<< name.at(0);
input=Antoni Sniezek
output=A
*/

//Method for inserting Char into any given position
/*name.insert(0,"@");
cout<<name;
input= Antoni Sneizek
output=@Antoni Sniezek
*/

//Method for finding a character/symbol
/*cout<<name.find(' ');
input=Antoni Sniezek
output=6(at position 6)
*/

//method for erasing a portion of a string (erase point a to point b)
/*
name.erase(0,5);
cout<<name
input=Antoni Sniezek
output=i Sniezek
*/

}