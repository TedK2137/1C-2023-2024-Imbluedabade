
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

void task1()
{
	int NumeroUsuario;
	std::cout << "Podaj liczbe:\n";
	std::cin >> NumeroUsuario;
	if (NumeroUsuario % 2 == 0) // NumeroUsuario != 0
		std::cout << "Liczba jest parzysta";
	else
		std::cout << "Liczba jest nieparzysta";



}


int main()
{
	//task();
	task1();
}


