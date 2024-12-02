#include <iostream>
#include <ctime>
using namespace std;

void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1, string topping2);


int main(){

    bakePizza("pepperoni","mushroom");
    
    return 0;
}

void bakePizza(){
    cout<<"Here is your Pizza!\n";
}
void bakePizza(string topping1){
    cout<<"Here is your " <<topping1;
}
void bakePizza(string topping1, string topping2){
    cout<<"Here is your " <<topping1<<" and "<<topping2<< " pizza";
}