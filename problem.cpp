//What is the output of the following C++ code?

#include <iostream>
using namespace std;

int main() {
    int var1 = 5;
    int var2 = 6;
    if ((var2 = 1) == var1)  //var2=1 and then var2+1=2
        cout << var2;
    else
        cout << (var2 + 1);
}