#include <iostream>
#include <ctime>
using namespace std;

int main(){
    //IMPORTANT TO REMEMBER ABOUT RANDOM GENERATORS!!!!
    srand(time(NULL));
    int randNum= rand()%6+1;


    switch(randNum){
        case 1: cout<<"You have won a 75 Plat!";
                break;
        case 2: cout<<"You have won a Ignis Wraith Blueprint!";
            break;
        case 3: cout<<"You have won a 170 Plat!";
            break;
        case 4: cout<<"You have won a 370 Plat!";
            break;
        case 5: cout<<"You have won a 3300 Plat! !!!!!MEGA WIN!!!!!";
            break;
        default: cout<<"you did not win anything";
            

    }
    return 0;
}