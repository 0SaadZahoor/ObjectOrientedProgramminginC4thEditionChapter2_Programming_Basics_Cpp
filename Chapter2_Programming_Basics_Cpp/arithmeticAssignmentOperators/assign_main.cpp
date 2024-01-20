// assign_main.cpp created on 2024
//demonstrates aritmetic assignment operaors

#include<iostream>

int main()
{
    int answer = 27;
    answer += 10;
    std::cout << answer << ", ";
    answer -= 7;
    std::cout << answer << ", ";
    answer *= 2;
    std::cout << answer << ", ";
    answer /= 3;
    std::cout << answer << ", ";
    answer %= 3;
    std::cout << answer << "\n";
    return 0;
}