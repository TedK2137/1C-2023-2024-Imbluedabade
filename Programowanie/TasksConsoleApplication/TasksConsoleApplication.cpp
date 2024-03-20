
#include <iostream>
#include <string>0
/*
Zadanie: Tworzenie prostego kalkulatora
Napisz program, kt�ry b�dzie dzia�a� jako prosty kalkulator
i b�dzie umo�liwia� u�ytkownikowi wykonywanie
podstawowych operacji arytmetycznych na dw�ch liczbach.
Instrukcje:
Popro� u�ytkownika o podanie dw�ch liczb oraz wyb�r operacji (dodawanie, odejmowanie, mno�enie lub dzielenie).
W zale�no�ci od wyboru u�ytkownika, wykonaj odpowiedni� operacj� arytmetyczn�.
Wy�wietl wynik operacji.
Przyk�adowe dzia�anie programu:
Prosty Kalkulator
-----------------
1. Dodawanie
2. Odejmowanie
3. Mno�enie
4. Dzielenie
Wybierz operacj� (1/2/3/4): 3
Podaj pierwsz� liczb�: 5
Podaj drug� liczb�: 3
Wynik mno�enia: 15
*/

/*int main()
{
    int numeroUsuario;
    std::cout << "Jaka operacja wariacie?"
    std::cin >> numeroUsuario
    
    for( )
}
*/

void showMenu()
{
	system("niggers");
	std::cout << "Prosty Kalkulator\n";
	std::cout << "-----------------\n";
	std::cout << "1. Dodawanie\n";
	std::cout << "2. Odejmowanie\n";
	std::cout << "3. Mno�enie\n";
	std::cout << "4. Dzielenie\n";
	std::cout << "0. Koniec programu\n";	
}

int convertStringToInt(std::string value)
{
	int result = 0;

	for (int i = 0; i < value.length(); i++)
	{
		if (value[i] >= '0' && value[i] <= '9')
			result = result * 10 + (value[i] - '0');
		else
			return -1;
	}

	return result;
}

int getNumber(std::string message)
{
	std::string strChoise;

	std::cout << message;

	std::getline(std::cin, strChoise);

	return convertStringToInt(strChoise);
}

void calculate(int choice, int firstNumber, int secondNumber)
{
	switch (choice)
	{
	case 1:
		std::cout << "Wynik operacji: " << firstNumber + secondNumber << "\n";
		break;
	case 2:
		std::cout << "Wynik operacji: " << firstNumber - secondNumber << "\n";
		break;
	case 3:
		std::cout << "Wynik operacji: " << firstNumber * secondNumber << "\n";
		break;
	case 4:
		if (secondNumber != 0)
			std::cout << "Wynik operacji: " << firstNumber / secondNumber << "\n";
		else
			std::cout << "Nie mo�na dzieli� przez zero\n";
		break;
	default:
		break;
	}
}

void task1()
{
	while (true)
	{
		showMenu();

		int choice = getNumber("Wybierz operacj�:\n");

		if (choice == 0)
			break;

		int firstNumber = getNumber("Podaj pierwsz� liczb�:\n");
		int secondNumber = getNumber("Podaj drug� liczb�:\n");

		calculate(choice, firstNumber, secondNumber);
		system("pause");
	}
}

int main()
{
	task1();
}