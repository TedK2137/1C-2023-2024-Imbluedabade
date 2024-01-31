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

void task4(int number)
{
    std::cout << "zmienna number w funkcji task4: " << number << "\n";
    number--;
    std::cout << "zmienna number w funkcji task4: " << number << "\n";
}

void task5(int &number)
{
    std::cout << "zmienna number w funkcji task5: " << number << "\n";
    number--;
    std::cout << "zmienna number w funkcji task5: " << number << "\n";
}

int main()
{
    /*
    task1();
    task1();
    task2("Witaj swiecie!!\n");
    task2("Ala ma kota\n");
    std::string text = "Uczyæ siê programowania!!!\n";
    task2(text);
    task3("Jan", 35);
    task3("Ala", 17);
    */
    int number = 5;
    /*std::cout << "zmienna number w funkcji main: " << number << "\n";
    task4(number);
    std::cout << "zmienna number w funkcji main: " << number << "\n";

    task4(9);*/
    const int NUMBER = 9;
    //task4(NUMBER);

    std::cout << "zmienna number w funkcji main: " << number << "\n";
    task5(number);
    std::cout << "zmienna number w funkcji main: " << number << "\n"

}

