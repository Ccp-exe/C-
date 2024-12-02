#include <iostream>
#include <ctime>
using namespace std;

/*double square(double length);
double cube(double length );

int main(){
    double length;
    cout<<"please enter a length: \n";
    cin>>length;

    
    double area = square(length);
    double volume= cube(length);
    
    //cout<<"please enter a length: \n";
    //cin>>length;

    cout<<"your area of the square is: "<< area <<" cm^2 \n";
    cout<<"your volume of the square is: "<< volume <<" cm^2 ";
    return 0;
}

double square(double length){
    return length * length;
}
double cube(double length){
    return length*length*length;
}
*/
string concat(string firstname,string lastname);

int main(){
    string firstname;
    cout<<"please enter your first name: ";
    cin>>firstname;

    string lastname;
   cout<<"please enter your last name: ";
   cin>>lastname;

   string fullname =concat(firstname, lastname);
   cout<<"Your full name is: "<< fullname;
    return 0;
}
string concat(string firstname,string lastname){
    return firstname + " " + lastname;
}