// chartype.cpp -- тип char
#include <iostream>
int main()
{
    using namespace std;
    char ch; // объявление переменной char
    cout << "Enter a character: ";
    cin >> ch;
    cout  << endl << "Hola! ";
    cout << "Thank you for the " << ch << " character." << endl;
    return 0;
}
