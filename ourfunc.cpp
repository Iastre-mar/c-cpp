// ourfunc.cpp -- определение собственной функции
#include <iostream>
void simon(int); //прототип функции simon()

int main()
{
    using namespace std;
    simon(3); // вызов функции simon()
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    return 0;
}

void simon(int n) // определение функции simon ()
{
    using namespace std;
    cout << "Simon says touch your toes " << n << " times" << endl;
} // функция void не требует return