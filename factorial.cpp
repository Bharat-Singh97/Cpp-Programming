#include<iostream>
using namespace std;

  int main() {
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int factorial = 1; //factorail of zero
    int i = 1; // numbers 1,2,3,etc
    while (i<=n)
    {
        factorial = factorial * i;
        i+=1;
    }
    cout<<factorial<<endl;
    return 0;
    
  }