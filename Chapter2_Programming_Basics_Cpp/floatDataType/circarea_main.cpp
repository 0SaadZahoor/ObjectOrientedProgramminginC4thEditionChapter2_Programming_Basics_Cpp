//circarea_main.cpp created in 2023
// demonstrates floating point variables

#include<iostream>
#include<cmath>

int main ()
{
    float circle_Radius;
    float pi = 3.14159L;
    std::cout << "Enter the radius of circle: ";
    std::cin >> circle_Radius;
    auto circle_Area = pi*pow(circle_Radius,2);
    std::cout << "Circle Area is: " << circle_Area << std::endl;
    std::cout << "sizeof circle_Radius: " << sizeof(circle_Radius)*8;  
    return 0;
}