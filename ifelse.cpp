//What is the output of the following C++ code?

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 100;
    if (a <= b || c <= b) {
        cout << "hello" << endl; //utput is hello
    } else if (a <= b || a <= c) {
        cout << "hi" << endl;
    } else {
        cout << "hey" << endl;
    }
}