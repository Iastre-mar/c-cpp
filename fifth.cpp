// Напишите программу, в которой функция main() вызывает определяемую
//пользователем функцию, принимающую в качестве аргумента значение
//температуры по Цельсию и возвращающую эквивалентное значение температуры по
//Фаренгейту.

#include <iostream>

int main(){
    std::cout << "Please enter a Celsius value: ";
    int celsius;
    std::cin >> celsius;
    std::cout << celsius << " degrees Celsius is " << celsius * 1.8 + 32 << " degrees Fahrenheit";
}