#include<iostream>
using namespace std;
class A 
{   public:
  A(){
    cout<<"constructor of base class"<<endl;
  }
~A()
{
    cout<<"destructor of base class"<<endl;
}

virtual void display()
{
    cout<<"function of base class"<<endl;
}
};

class B: public A
{public:
 B(){
    cout<<"constructor of derived class"<<endl;
  }
~B()
{
    cout<<"destructor of derived class"<<endl;
}

 void display()
{
    cout<<"\nimplementation of pure virtual class "<<endl;
}


};

int main ()
{ A * ptr= new B;
ptr->display();
delete ptr;





}