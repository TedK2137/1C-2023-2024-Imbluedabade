// ArrayConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void task1()
{
    const unsigned short ARRAY_SIZE = 5;
    int numbers[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << "Podaj dan¹\n";
        std::cin >> numbers[i];
    }

    std::cout << "Podane dane w odwrotnej kolejnoœci:\n";
    for (int i = ARRAY_SIZE - 1; i >= 0; i--)
    {
    std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";
}

//œrednia arytmetyczna elementów w tablicy liczb ca³kowitych
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
    std::cout << "Œrednia wynosi: " << avg << "\n";

}

//Napisz program, który wyznaczy wszystkie liczby pierwsze od 2 do zadeklarowanego zakresu. Metoda sito Eratostenesa.
void task4()
{
	const long long UPPER_RANGE = 70;
	const long long UPPER_RANGE = 1000000;

	//wersja 1

	for (long long numberToCheck = 2; numberToCheck <= UPPER_RANGE; numberToCheck++)
	{
		bool isPrime = true;
		for (long long i = 2; i <= numberToCheck / 2; i++)
		{
			if (numberToCheck % i == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime /*== true*/)
			if (isPrime)
				std::cout << numberToCheck << ", ";
	}
	std::cout << "Gotowe\n";
	std::cout << "\n";

	//wersja 2
	bool sieveOfEratosthenes[UPPER_RANGE + 1];

	for (unsigned long long i = 2; i <= UPPER_RANGE; i++)
	{
		sieveOfEratosthenes[i] = true;
	}

	for (unsigned long long number = 2; number <= UPPER_RANGE; number++)
	{
		if (sieveOfEratosthenes[number] /*== true*/)
		{
			for (long long numberToCrossOut = number + number; numberToCrossOut <= UPPER_RANGE; numberToCrossOut = numberToCrossOut + number)
				sieveOfEratosthenes[numberToCrossOut] = false;
		}
	}

	for (unsigned long long i = 2; i <= UPPER_RANGE; i++)
	{
		if (sieveOfEratosthenes[i] /*== true*/)
			std::cout << i << ", ";
	}
	std::cout << "\n";
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
	task4();
}
