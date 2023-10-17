
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

void task2()
{
	int NumeroUsuario;
	std::cout << "Podaj liczbe:\n";
	std::cin >> NumeroUsuario;
	if (NumeroUsuario < 10 ) // NumeroUsuario != 0
		std::cout << "Liczba jest parzysta";
	else
		std::cout << "Liczba jest nieparzysta";



}

void task3()
{
	int NumeroUno, NumeroDos;
	std::cout << "Podaj liczbe:\n";
	std::cin >> NumeroUno;
	std::cout << "Podaj liczbe:\n";
	std::cin >> NumeroDos;

	if (NumeroDos != 0)
	{
		int cociente = NumeroUno / NumeroDos;
			std::cout << "Wynik dzielenia " << cociente << "\n";
	}
	else
		std::cout << "Dzielenie przez zero!!1!1!!11\n";

}

int main()
{
	//task();
	//task1();
	//task2();
	task3();

}



