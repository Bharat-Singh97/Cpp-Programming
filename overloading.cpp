#include<iostream>
using namespace std;

class KG 
{ 
    public:
    void func (int x)
    {  cout<<"valus of x is "<< x <<endl;}
    void func(double x)
    { cout<< "value of x is " << x<< endl;}

};
int main()
{
KG obj1;
obj1.func(7);
obj1.func(9.2);
return 0;


}