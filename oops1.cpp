#include<iostream>
using namespace std;
//class name fruit
class Fruit{
    public:
    string name;        //properties data type and name string datatype color is properties name
    string color;
};

int main () {

Fruit apple; //object
apple.name = "Apple";
apple.color = "Red";
cout<<apple.name<<"-"<<apple.color<<endl; 

Fruit *mango = new Fruit();   //pointer variable to our which is mango and create object using new keyword 
mango->name ="Mango"; // yaha dot nahi use hota uski  jagah arrow operator use hoga
mango->color ="Yellow";
cout<<mango->name<<"-"<<mango->color<<endl;


return 0;


    
}