#include <iostream>
#include <ctime>
using namespace std;


void showBalance(double balance);
double deposit();
double withdraw(double balance);

double balance=1;
int main(){
    double balance = 123;
    int choice =0;

    do{

        cout<<"*********************\n";
        cout<<"Enter your choice: \n";
        cout<<"1. Show Balance \n";
        cout<<"2. Deposit Money \n";
        cout<<"3. Withdraw Money \n";
        cout<<"4. Exit\n";
        cin>> choice;

        cin.clear();
        fflush(stdin);

        // i++==++i
        switch(choice){
            case 1: showBalance(balance);
                    break;

            case 2:balance+=deposit();
                 showBalance(balance);
                    break;

            case 3:balance-=withdraw(balance);
                 showBalance(balance);
                    break;

            case 4:cout<<"Thanks for Visting!\n";
                    
                    break;

            default:cout<<"invalid choice";
        }
    }while(choice!=4);
    

    return 0;
}



void showBalance(double balance){
cout<<"Here is your Balance: "<<balance<<'\n';
}

double deposit(){
        double amount=0;
        cout<<"how much would you like to deposit?: ";
        cin>>amount;

        if(amount>0){
                
        return amount;
        }
        cout<<"Not valid amount!";
        return 0;
}

double withdraw(double balance){
        double amount=0;
        cout<<"how much would you like to deposit?: ";
        cin>>amount;

        if(amount>balance){
                
        cout<<"insufficient funds";
        return 0;
        }
        else if(amount<0){
                cout<<"This is not a real amount!\n";
                return 0;
        
        }
        else{
                return amount;
        }
       
}

void showbalance(double balance){
cout<<"your balance is : "<<balance;
}