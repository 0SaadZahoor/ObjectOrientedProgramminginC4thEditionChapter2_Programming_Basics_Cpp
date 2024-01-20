// width1_main.cpp created in 2023
// demonstrates need for setw manipulator

#include<iostream>

int main()
{
    long pop1 = 2425785;
    long pop2 = 47;
    long pop3 = 9761;
    std::cout << "LOCATION " << "POP." << std::endl    
              << "Portcity " << pop1 << std::endl
              << "Hightown " << pop2 << std::endl
              << "Lowville " << pop3 << std::endl;
    return 0;
}