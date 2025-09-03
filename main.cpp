#include <iostream>
#include "datafloat.h"

using namespace std;

void Exer1(){
    DataFloat a, b, c;
    cout << "Input the first number" << endl;
    a.input();
    cout << "Input the second number" << endl;
    b.input();
    c = a + b;
    cout << "a + b has a number part as "; c.printNumber(); cout << ", error as "; c.printsError(); cout << endl;
    c = a * b;
    cout << "a * b has a number part as "; c.printNumber(); cout << ", error as "; c.printsError(); cout << endl;
    c = a / b;
    cout << "a / b has a number part as "; c.printNumber(); cout << ", error as "; c.printsError(); cout << endl;
}

void Exer2(){
    float x, y, z;
    
}

int main(){
    Exer1();
    return 0;
}