
#include <iostream>

//Napisz program, kt�ry ma pobra� od u�ytkownika liczb� dodatni�. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.
void task1()
{
	int numberFromUser;
	std::cout << "Podaj liczb� doodatni�:\n";
	std::cin >> numberFromUser;
	if (numberFromUser < 0)
	{
		std::cout << "Podaj liczb� doodatni�:\n";
		std::cin >> numberFromUser;
		if (numberFromUser < 0)
		{
			std::cout << "Podaj liczb� doodatni�:\n";
			std::cin >> numberFromUser;
			if (numberFromUser < 0)
			{
				std::cout << "Podaj liczb� doodatni�:\n";
				std::cin >> numberFromUser;
				if (numberFromUser < 0)
				{
					std::cout << "Podaj liczb� doodatni�:\n";
					std::cin >> numberFromUser;
					//wklejamy ca�ego If'a
				}
			}
		}
	}

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}

void task2()
{
	const int LOWER_RANGE = 1;
	const int UPPER_RANGE = 100;
	int NumeroUsuario;
		srand(time(NULL));
	int randomNumber = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;

	do
	{
		std::cout << "Podaj liczbe\n";
		std::cin >> NumeroUsuario;
		if (NumeroUsuario > randomNumber)
			std::cout << "mnij\n";
		if (NumeroUsuario < randomNumber)
			std::cout << "wincyj\n";
	} while (NumeroUsuario != randomNumber);

			std::cout << "Zgadles liczbe";



}

void task3()
{
	unsigned long long upperRange, currentNumber;
	std::cout << "Podaj g�rny zakres wi�kszy b�d� r�wny 1\n";
	std::cin >> upperRange;

	currentNumber = 1;

	do
	{
		std::cout << currentNumber << ", ";
		currentNumber = (currentNumber + 1);
	} while (upperRange >= currentNumber);

}

int main()
{
	setlocale(LC_CTYPE, "Polish");
	//task2();
	task3();
}