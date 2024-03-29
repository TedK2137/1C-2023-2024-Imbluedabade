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

    std::cout << "wylosowane liczby:\n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";
    //----------------------------------------------------------------------------
    int sum = 0;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        sum = sum + numbers[i];
    }
    double avg = sum * 1.0 / ARRAY_SIZE;
    std::cout << "�rednia wynosi: " << avg << "\n";

}


// Napisz program, kt�ry posortuje tablic� liczb sposobem przez wyb�r.
void task6()
{
	const short LOWER_RANGE = 0;
	const short UPPER_RANGE = 70;

	const unsigned short ARRAY_SIZE = 10;
	int numbers[ARRAY_SIZE];

	srand(time(0));

	std::cout << "wylosowane liczby:\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
	//----------------------------------------------------------------------------

	for (int i = 1; i < ARRAY_SIZE; i++)
	{
		int pom = numbers[1];

		int j;
		for (int j = i - 1; j >= 0 && numbers[j] > pom; j--)
		{
			numbers[j + 1] - numbers[j];
		}
		numbers[j + 1] = pom;
	}

	std::cout << "Posortowane liczby:\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
	task6();
}
