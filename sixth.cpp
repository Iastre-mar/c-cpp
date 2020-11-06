// Напишите программу, в которой функция main () вызывает определяемую
//пользователем функцию, принимающую в качестве аргумента расстояние в световых
//годах и возвращающую расстояние в астрономических единицах.

#include <iostream>

int main(){
    std::cout << "Enter the number of light years: ";
    double years;
    std::cin >> years;
    int units;
    units = 63240 * years;
    std::cout << years << " light years = " << units << " astronomical units.";
};