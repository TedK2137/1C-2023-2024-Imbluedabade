
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
	std::cout << "Podaj �a�cuch znak�w\n";
	std::cin >> textFromUser;

	int numberOfCharacters = 0;

	//std::cout << "Pierwszy znak to " << textFromUser[0] << "\n";
	//textFromUser[1] = 'x';
	//std::cout << "Ilo�� znak�w " << textFromUser.length() << "\n";

	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (textFromUser[i] == 'a')
			numberOfCharacters++;
	}

	std::cout << "Ma�ych liter 'a' jest " << numberOfCharacters << "\n";
}

/*
* 
* 
* 
* Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem (czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
* Program sprawdzaj�cy czy podane dwa s�owa s� anagramami (czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
* Program wyci�gaj�cy informacje z numeru PESEL
* Program implementuj�cy algorytm szyfrowania Cezara (proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).
* Program kt�ry na wej�ciu przyjmie r�wnanie a na wyj�ciu da r�wnanie w odwrotnej notacji polskiej ONP. Np. na wej�ciu 2+3*4 na wyj�cu da 234*+
* Program, kt�ry na wej�ciu przyjmie r�wanie w ONP a na wyj�ciu wy�wietli wynik r�wania.
* Algorytm szyfrowania AtBash Cipher - algorytm szyfruj�cy, w kt�rym ka�da litera jest zamieniana na liter� z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
*/

//Napisz program, kt�ry b�dzie prosi� o has�o.Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo.
void task5()
{
	std::string password;
	std::cout << "Podaj has�o\n";
	std::cin >> password;
	
	if (password == "kokodzambo2137")
		std::cout << "Chlu�niem bo u�niem";
	else
	{
		{
			std::cout << "Nieprawid�owe has�o cymbale\n";
			std::cin >> password;
		} while (password != "kokodzambo2137");
		std::cout << "Chlu�niem bo u�niem";
	}
}

//Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
void task6()
{
	std::string textFromUser;
	std::cout << "Podaj ci�g znak�w\n";
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
	std::cout << "Liczba samog�osek wynosi " << numberOfVowels << " a liczba sp�g�osek wynosi " << textFromUser.length() - numberOfVowels << "\n";


}

//Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym. Nast�pnie skonwertuj t� liczb� na system dw�jkowy (binarny) i wy�wietl wynik.
void task7()
{
}

int main()
{
	setlocale(LC_CTYPE, "Polish");
	task7();
}
