// carrots.cpp -- программа по технологии производства пищевых продуктов
// использует и отображение и переменную

#include <iostream>

int main() {
    using namespace std;

    int carrots; //объявление переменной

    carrots = 25; //присваивание
    cout << "I have ";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    carrots -= 1;
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
    return 0;

}