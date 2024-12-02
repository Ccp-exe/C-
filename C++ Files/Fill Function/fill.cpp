#include <iostream>
#include <ctime>
using namespace std;

int main(){
    //fill()= fills a range of elements with a specific value 
    // fill(begin,end,value)

    const int SIZE =100;
    string foods[SIZE];

    fill(foods, foods + SIZE/2, "pizza");
    fill(foods+ (SIZE/2), foods + SIZE, "hamburger");

    for(string food: foods){
        cout<< food<< '\n';
    }


    return 0;
}