// cast_main.cpp is created in 2024
// tests signed and unsigned integers

#include<iostream>

int main()
{
    unsigned int intVar = 1500000000;
    intVar = (intVar*10)/10;
    std::cout << "intVar = " << intVar << std::endl;
    intVar = 1500000000;
    intVar = (static_cast<double>(intVar)*10)/10;
    std::cout << "intVar = " << intVar << std::endl;
    return 0;
}
//Result:
// This program produces an error at line 9 and produces the wrong output
//because the multiplication value exceeds the range of variable that holds them.
// The correct value which is received will be from line 12