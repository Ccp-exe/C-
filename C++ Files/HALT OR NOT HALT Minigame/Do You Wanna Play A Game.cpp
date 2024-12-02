//Antoni Sniezek 22531599
//Naoise Canavan 23728369
//L4E-57

#include <iostream>
#include <ctime>
using namespace std;
int delay(int miliseconds);


int delay(int milliseconds){
     clock_t goal = milliseconds + clock();
     while(goal>clock());
     return 1;
   }


int main(){

    while(1==1){
        delay(2*5000);
    cout<<"Want to play a game?";
        delay(2*4000);
    cout<<"const std:string SOME_ERROR = 'Human friendly error message'";
        delay(2*5647);
    for(int j=0; j<55000; j++){
        srand((unsigned)time(0)); 
        double i = (rand()%100)+1;
        double p = (rand()%100)+1;
        double r = (rand()%100)+1;
         delay(2*1556);
        cout<<"$ df Filesystem      Size  Used Avail Use% Mounted on overlay"          << i <<"G   "<<i <<"G     0 "<< p<<"% /tmpfs            "<<i<<"M     0   "<< i<<"M   "<<i <<"% /devtmpfs           "<<i <<"G     "<<i<<"0  "<< i<<"G   0% /sys/fs/cgroup shm              "<<r<<"M     0   "<<p<<"M   0% /dev/shm /dev/sda1        "<<i<<"G   "<<r<<"G     "<<r<<" 1"<<r<<"% /etc/hosts tmpfs           "<<i<<"G     0  "<<p<<"G   0% /proc/acpitmpfs           "<<i<<"G     0 "<<r<<"G   "<<i<<"% /sys/firmware$ du -h --max-depth=1 / "<<i<<"G    /";
        }
    }
return 0;
}
