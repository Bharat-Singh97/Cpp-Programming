#include<iostream> 
int main() {
using namespace std ;
int i,j,n;
cout<<"Enter n:";
cin>> n;
 i = 1;
while (i<=n)
{  j = 1;
    while (j<=n)
    {
        cout<<"*";
        j+=1;
    }
    cout<<endl;
    i+=1;
}

} 