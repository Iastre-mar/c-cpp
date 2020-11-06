// hexoct2.cpp -- отображает значения в 16 и восьмеричном форматах
#include <iostream>
using namespace std;
int main()
{
    int chest = 42;
    int waist = 42;
    int inseam = 42;
    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex; // манипулятор для изменения системы счисления
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct; // манипулятор для изменения основания системы счисления
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
    return 0;


}