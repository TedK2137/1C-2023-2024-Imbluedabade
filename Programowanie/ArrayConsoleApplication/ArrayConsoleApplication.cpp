// ArrayConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void task1()
{
    const unsigned short ARRAY_SIZE = 5;
    int numbers[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << "Podaj dan�\n";
        std::cin >> numbers[i];
    }

    std::cout << "Podane dane w odwrotnej kolejno�ci:\n";
    for (int i = ARRAY_SIZE - 1; i >= 0; i--)
    {
    std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";
}

//�rednia arytmetyczna element�w w tablicy liczb ca�kowitych
void task2()
{
    const unsigned short LOWER_RANGE = 5;
    const unsigned short UPPER_RANGE = 7;

    const unsigned short ARRAY_SIZE = 30;
    int numbers[ARRAY_SIZE];

    srand(time(0));

    std::cout

}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}
