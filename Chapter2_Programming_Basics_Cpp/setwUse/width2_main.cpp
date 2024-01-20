// width2_main.cpp created in 2023
// demonstrates setw manipulator

#include<iostream>
#include<iomanip>   //for setw
using namespace std;
int main()
{
    long pop1 = 2425785;
    long pop2 = 47;
    long pop3 = 9761;
    std::cout << std::setw(8) << "LOCATION" << std::setw(12) << "POPULATION" << std::endl    
              << std::setw(8) << "Portcity " << std::setw(12) << pop1 << std::endl
              << std::setw(8) << "Hightown " << std::setw(12) << pop2 << std::endl
              << std::setw(8) << "Lowville " << std::setw(12) << pop3 << std::endl;
    return 0;
}