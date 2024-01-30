// FunctionConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void task1()
{
    std::cout << "hello world\n";
}

void task2(std::string textParam)
{
    std::cout << textParam << "\n";
}

void task3(std::string name, int age)
{
    if (age >= 18)
        std::cout << "jest pelnoletni/pelnoletnia\n";
    else
        std::cout << "jest niepelnoletni/niepelnoletnia\n";
}
int main()
{
    //task1();
    //task1();
    //task2("Witaj swiecie!!\n");
    //task2("Ala ma kota\n");
    //std::string text = "Uczyæ siê programowania!!!\n";
    //task2(text);
    task3("Jan", 35);
    task3("Ala", 17);
}
