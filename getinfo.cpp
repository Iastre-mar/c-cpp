// getinfo.cpp -- ввод и вывод
#include <iostream>
int main()
{
    using namespace std;
    int carrots;
    cout << "How many carrots do you gave?" << endl;
    cin >> carrots; // ввод C++
    cout << "Here are two more. ";
    carrots += 2;
    // concat
    cout << "Now you have " << carrots << " carrots." << endl;
    return 0;
}