
#include <iostream>


void task1()
{
	char characterFromUser;
	std::cout << "Podaj znak\n";
	std::cin >> characterFromUser;
	
	std::cout << characterFromUser;

}

void task3()
{
	std::string userName;
	std::cout << "Podaj swoje imie\n";
	std::cin >> userName;

	std::cout << "Witaj " << userName << " tutaj.\n";
}

void task4()
{
	std::string textFromUser;
	std::cout << "Podaj ³añcuch znaków\n";
	std::cin >> textFromUser;

	int numberOfCharacters = 0;

	//std::cout << "Pierwszy znak to " << textFromUser[0] << "\n";
	//textFromUser[1] = 'x';
	//std::cout << "Iloœæ znaków " << textFromUser.length() << "\n";

	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (textFromUser[i] == 'a')
			numberOfCharacters++;
	}

	std::cout << "Ma³ych liter 'a' jest " << numberOfCharacters << "\n";
}

/*
* 
* 
* 
* Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem (czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
* Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami (czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
* Program wyci¹gaj¹cy informacje z numeru PESEL
* Program implementuj¹cy algorytm szyfrowania Cezara (proste szyfrowanie, w którym ka¿dy znak w tekœcie jest zastêpowany innym znakiem, przesuniêtym o sta³¹ liczbê pozycji w alfabecie).
* Program który na wejœciu przyjmie równanie a na wyjœciu da równanie w odwrotnej notacji polskiej ONP. Np. na wejœciu 2+3*4 na wyjœcu da 234*+
* Program, który na wejœciu przyjmie rówanie w ONP a na wyjœciu wyœwietli wynik rówania.
* Algorytm szyfrowania AtBash Cipher - algorytm szyfruj¹cy, w którym ka¿da litera jest zamieniana na literê z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
*/

//Napisz program, który bêdzie prosi³ o has³o.Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
void task5()
{
	std::string password;
	std::cout << "Podaj has³o\n";
	std::cin >> password;
	
	if (password == "kokodzambo2137")
		std::cout << "Chluœniem bo uœniem";
	else
	{
		{
			std::cout << "Nieprawid³owe has³o cymbale\n";
			std::cin >> password;
		} while (password != "kokodzambo2137");
		std::cout << "Chluœniem bo uœniem";
	}
}

//Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
void task6()
{
	std::string textFromUser;
	std::cout << "Podaj ci¹g znaków\n";
	std::cin >> textFromUser;

	int numberOfVowels = 0;

	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (
			textFromUser[i] == 'a' ||
			textFromUser[i] == 'e' ||
			textFromUser[i] == 'i' ||
			textFromUser[i] == 'o' ||
			textFromUser[i] == 'u' ||
			textFromUser[i] == 'y'
			)
			numberOfVowels++;
	}
	std::cout << "Liczba samog³osek wynosi " << numberOfVowels << " a liczba spó³g³osek wynosi " << textFromUser.length() - numberOfVowels << "\n";


}

//Poproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym. Nastêpnie skonwertuj tê liczbê na system dwójkowy (binarny) i wyœwietl wynik.
void task7()
{
}

int main()
{
	setlocale(LC_CTYPE, "Polish");
	task7();
}
