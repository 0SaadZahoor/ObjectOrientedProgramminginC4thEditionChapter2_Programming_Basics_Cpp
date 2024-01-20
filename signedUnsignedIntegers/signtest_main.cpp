// signtest_main.cpp created in 2024
// tests signed and unsigned integers

#include<iostream>

int main()
{
    int signedIntVar = 1500000000;
    unsigned int uIntVar = 1500000000;
    signedIntVar = (signedIntVar*2)/3;
    uIntVar = (uIntVar*2)/3;
    std::cout << "signedIntVar = " << signedIntVar << "\n";
    std::cout << "uIntVar = " << uIntVar << "\n";
    return 0;
}
//Result:
// This program produces an error at line 10 and produces the wrong output
//because the multiplication value exceeds the range of variable that holds them.
// The correct value which is received will be from line 12