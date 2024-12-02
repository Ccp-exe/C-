#include <iostream>
using namespace std;

int main(){
//generating random numbers with a hugher limit on 
//the dice/number you need or you will be using
//this is pusuedo random == not truly random numbers(but decently close)
   srand(time(NULL));

   int num1 = (rand()%6)+1;
   int num2 = (rand()%6)+1;
   int num3 = (rand()%6)+1;
   cout<<num1<<'\n';
   cout<<num2<<'\n';
   cout<<num3<<'\n';
   
    return 0;
}