#include <iostream>
using namespace std;
#include <cctype>


int main(){


    //swtich statements are a alternative to if statements
    // instead of using many "else ifs" you can use switches instead 
   /* int month;
    cout<< "please enter a month (from 1-12): ";
    cin>> month;

    switch(month){
        case 1:
        cout<< "it is January ";
        break;
        case 2:
        cout<< "it is Feburary ";
        break;
        case 3:
        cout<< "it is March ";
        break;
        case 4:
        cout<< "it is April";
        break;
        case 5:
        cout<< "it is May ";
        break;
        case 6:
        cout<< "it is June ";
        break;
        case 7:
        cout<< "it is July ";
        break;
        case 8:
        cout<< "it is August ";
        break;
        case 9:
        cout<< "it is September ";
        break;
        case 10:
        cout<< "it is October ";
        break;
        case 11:
        cout<< "it is November ";
        break;
        case 12:
        cout<< "it is December ";
        break;
        default:
        cout<<"please enter only numbers from (1-12)";
    }
    */

   char grade;
   
   cout<< " Please enter a letter for your grade: ";
   cin>> grade;
   char converted=toupper(grade);


   switch(converted){
    case 'A':
    cout<< "You have done Great!";
    break;
    case 'B':
    cout<< "You have done Good~";
    break;
    case 'C':
    cout<< "You have done Okay";
    break;
    case 'D':
    cout<< "You have done bad";
    break;
    case 'F':
    cout<< "You have FAILED!";
    break;
    default:cout<<"Why even bother? Also only try typing in (A-F,a-f)";
   }
    return 0;
}