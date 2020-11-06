// Напишите программу на C++, которая использует три определяемых
//пользователем функции (включая main ()) и генерирует следующий вывод:

#include <iostream>
void see_1();
void see_2();

int main()
{
    std::cout << "Three blind mice" << std::endl << "Three blind mice" << std::endl;
    see_1();
    see_2();
}

void see_1()
{
    std::cout << "See how they run" << std::endl;
}

void see_2()
{
    std::cout << "See how they run" << std::endl;
}