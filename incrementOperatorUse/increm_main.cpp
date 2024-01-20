// increm_main.cpp created on 2024
// demonstrates the increment operator

#include<iostream>

int main()
{
    int prefixIncrement = 10;
    int postfixIncrement = 10;

    std::cout << "prefixIncrement = " << prefixIncrement << "\n";
    std::cout << "postfixIncrement = " << postfixIncrement << "\n";
    std::cout << "prefixIncrement = " << ++prefixIncrement << "\n";
    std::cout << "postfixIncrement = " << postfixIncrement++ << "\n";
    std::cout << "postfixIncrement = " << postfixIncrement << "\n";
    return 0;
}
