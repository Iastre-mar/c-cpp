// Напишите программу, которая выдает запрос на ввод значений часов и минут.

#include <iostream>

int main()
{
    std::cout << "Enter the number of hours: ";
    int hours;
    std::cin >> hours;
    std::cout << "Enter the number of minutes: ";
    int minutes;
    std::cin >> minutes;
    std::cout << "Time: " << hours << ":" << minutes;
}