// Напишите программу на C++, которая выдает запрос на ввод расстояния в фарлон-
//гах и преобразует его в ярды. (Один фарлонг равен 220 ярдам, или 201168 м.)

#include <iostream>

int main(){
    using namespace std;
    cout << "Введите количество фарлонгов: ";
    int far;
    cin >> far;
    int yard;
    yard = far * 220;
    cout << "Расстояние равняется " << yard << " ярдам";
}