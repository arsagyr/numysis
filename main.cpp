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
    c.print();
}


int main(){
    Exer1();
    return 0;
}