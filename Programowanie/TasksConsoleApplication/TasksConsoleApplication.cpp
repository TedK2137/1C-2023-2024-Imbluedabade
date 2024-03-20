
#include <iostream>
#include <string>0
/*
Zadanie: Tworzenie prostego kalkulatora
Napisz program, który bêdzie dzia³a³ jako prosty kalkulator
i bêdzie umo¿liwia³ u¿ytkownikowi wykonywanie
podstawowych operacji arytmetycznych na dwóch liczbach.
Instrukcje:
Poproœ u¿ytkownika o podanie dwóch liczb oraz wybór operacji (dodawanie, odejmowanie, mno¿enie lub dzielenie).
W zale¿noœci od wyboru u¿ytkownika, wykonaj odpowiedni¹ operacjê arytmetyczn¹.
Wyœwietl wynik operacji.
Przyk³adowe dzia³anie programu:
Prosty Kalkulator
-----------------
1. Dodawanie
2. Odejmowanie
3. Mno¿enie
4. Dzielenie
Wybierz operacjê (1/2/3/4): 3
Podaj pierwsz¹ liczbê: 5
Podaj drug¹ liczbê: 3
Wynik mno¿enia: 15
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
	std::cout << "3. Mno¿enie\n";
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
			std::cout << "Nie mo¿na dzieliæ przez zero\n";
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

		int choice = getNumber("Wybierz operacjê:\n");

		if (choice == 0)
			break;

		int firstNumber = getNumber("Podaj pierwsz¹ liczbê:\n");
		int secondNumber = getNumber("Podaj drug¹ liczbê:\n");

		calculate(choice, firstNumber, secondNumber);
		system("pause");
	}
}

int main()
{
	task1();
}