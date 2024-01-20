// sqrt_main.cpp created on 2024
// demonstrates sqrt() library function

#include<iostream>
#include<cmath>

int main()
{
    double enteredNumber;
    double answerInSqrt;
    std::cout << "Enter a number: ";
    std::cin >> enteredNumber;
    answerInSqrt = sqrt (enteredNumber);
    std::cout << "Square root of the entered number is " << answerInSqrt <<"\n";
    return 0;
}