#include<iostream>
using namespace std;

main ()
{
int a = 10;
int *ptr=&a;//pointer
int **q=&ptr;//pointer to pointer
cout<<a<<endl;
cout<<&a<<endl;
cout<<ptr<<endl;
cout<<*ptr<<endl;

cout<<q<<endl;//address of p
cout<<*q<<endl;//address of a
cout<<**q<<endl;//value of a
cout<<&q<<endl;//address of q




}