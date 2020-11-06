// Напишите программу, которая предлагает пользователю ввести свой возраст.
//Затем программа должна отобразить возраст в месяцах:

#include <iostream>

int main()
{
    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;
    std::cout << "Your age in months is " << age * 12 << std::endl;
}