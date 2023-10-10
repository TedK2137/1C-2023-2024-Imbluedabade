
#include <iostream>

//napisz program który wyœwietli informacje czy liczba jest dodatnia czy nie.

void task()
{
	int number;
	std::cout << "Podaj liczbe:\n";
	std::cin >> number;
	if (number > 0)
		std::cout << "Liczba jest dodatnia";
	if (number == 0)
		std::cout << "Liczba jest rowna 0";
	else
		std::cout << "Liczba jest ujemna";


}

int main()
{
	task();
}


