#include <iostream>
#include <ctime>
using namespace std;

char player;
char computer;
char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;
    
    player = getUserChoice();
    cout<<"Your choice: ";
    showChoice(player);
    computer = getComputerChoice();
    cout<<"Computer choice: ";
    showChoice(computer);
    chooseWinner(player, computer);


    return 0;

}
char getUserChoice(){
   char player;
   cout<<"Rock-Paper-Scissors Game! \n";
   
   
    do{
        
        cout<<"Choose one of the following\n";
        cout<<"*******************\n";
        cout<<"'r' or 'R' for rock\n";
        cout<<"'p' or 'P' for paper\n";
        cout<<"'s' or 's' for scissors\n";
        cin>>player;

    }while(player != 'r' && player !='p' && player !='s'&&player != 'R' && player !='P' && player !='S');
    
    
    return player;
}

char getComputerChoice(){
    srand(time(0));
    int num= rand() %3+1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return  's';
        case 4: return 'R';
        case 5: return 'P';
        case 6: return 'S';
    }
    return 0;
}

void showChoice(char choice){

   switch(tolower(choice)){
        case 'r': cout<<"Rock\n";
            break;
        case 'p': cout<<"Paper\n";
            break;
        case 's': cout<<"Scissors\n";
            break;
         case 'R': cout<<"Rock\n";
            break;
        case 'P': cout<<"Paper\n";
            break;
        case 'S': cout<<"Scissors\n";
            break;
   }
}

void chooseWinner(char player, char computer){
    switch(player){
        case 'r': if(computer=='r'){
                cout<<" It's a tie!\n";
            }
            else if(computer =='p'){
                cout<<" You lose!\n";
            }
            else{
                cout<<" You win!\n";
            }
            break;
        case 'R': if(computer=='R'){
                cout<<" It's a tie!\n";
            }
            else if(computer =='P'){
                cout<<" You lose!\n";
            }
            else{
                cout<<" You win!\n";
            }
            break;
        case 'p': if(computer=='r'){
                cout<<" You win!\n";
            }
            else if(computer =='p'){
                cout<<" It's a tie!\n";
            }
            else{
                cout<<" You lose!\n";
            }
            break;
        case 'P': if(computer=='R'){
                cout<<" You win!\n";
            }
            else if(computer =='P'){
                cout<<" It's a tie!\n";
            }
            else{
                cout<<" You lose!\n";
            }
            break;
        case 's': if(computer=='r'){
                cout<<" You lose!\n";
            }
            else if(computer =='p'){
                cout<<" You win!\n";
            }
            else{
                cout<<" It's a tie!\n";
            }
            break;
        case 'S': if(computer=='R'){
                cout<<" You lose!\n";
            }
            else if(computer =='P'){
                cout<<" You win!\n";
            }
            else{
                cout<<" It's a tie!\n";
            }
            break;    
    }
    
  
}