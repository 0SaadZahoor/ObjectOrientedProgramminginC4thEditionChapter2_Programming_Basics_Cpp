//fahren_main.cpp created in 2023
//demonstrates cin, newline

#include<iostream>

int main()
{
    int temperature_In_Fahrenheit;
    std::cout << "enter the temperature in fahrenheit: ";
    std::cin >> temperature_In_Fahrenheit;
    int temperature_In_Celsius = (temperature_In_Fahrenheit-32)*5/9;
    std::cout << "Equivalent in Celsius is: " << temperature_In_Celsius << "\n";
    return 0;
}