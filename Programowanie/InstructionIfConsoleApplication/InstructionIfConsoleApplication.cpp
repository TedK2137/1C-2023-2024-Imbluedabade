
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

//Napisz program, który wyœwietli informacje czy liczba jest z zakresu <1 ; 10).
void task2()
{
	int number;
	std::cout << "Podaj liczbe:\n";
	std::cin >> number;

	//wersja 1
	if (number >= 1) //number > 0
	{
		if (number < 10) // number <= 9
			std::cout << "Liczba jest w przedziale\n";
		else
			std::cout << "Liczba z poza zakresu\n";
	}
	else
		std::cout << "Liczba z poza zakresu\n";

	//wersja 2
	if (number >= 1) //number > 0
		if (number < 10) // number <= 9
			std::cout << "Liczba jest w przedziale\n";
		else
			std::cout << "Liczba z poza zakresu\n";
	else
		std::cout << "Liczba z poza zakresu\n";

	//wersja 3
	if (number >= 1 && number < 10)
		std::cout << "Liczba jest w przedziale\n";
	else
		std::cout << "Liczba z poza zakresu\n";

	//wersja 4
	if (number < 1 || number >= 10)
		std::cout << "Liczba z poza zakresu\n";
	else
		std::cout << "Liczba jest w przedziale\n";

	//wersja 5
	if (!(number >= 1 && number < 10))
		std::cout << "Liczba z poza zakresu\n";
	else
		std::cout << "Liczba jest w przedziale\n";



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

//Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i sprawdzi, czy s¹ one równe.Wyœwietl odpowiedni komunikat.
void task4()
{
	int NumeroUno, NumeroDos;
	std::cout << "Podaj liczbe:\n";
	std::cin >> NumeroUno;
	std::cout << "Podaj liczbe:\n";
	std::cin >> NumeroDos;

	if (NumeroUno == NumeroDos)
		std::cout << "Liczby s¹ równe ";
	else
		std::cout << "Liczby nie s¹ równe ";


}

//Napisz program, który poprosi u¿ytkownika o podanie wieku i sprawdzi, czy osoba jest pe³noletnia.Wyœwietl odpowiedni komunikat.
void task5()
{
	int edad;
	std::cout << "Podaj swój wiek:\n";
	std::cin >> edad;

	if (edad >= 18)
		std::cout << "Jesteœ pe³noletni";
	else
		std::cout << "No piwo for you";


}

//Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i obliczy jej wartoœæ bezwzglêdn¹.Wyœwietl wynik.
void task6()
{
	int entero;
	std::cout << "Podaj liczbê ca³kowit¹:\n";
	std::cin >> entero;

	if (entero >= 0)
		std::cout << "Wartoœæ bezwzglêdna liczby = " << entero << "\n";
	else
		std::cout << "Wartoœæ bezwzglêdna liczby = " << entero * (-1);

}

//Napisz program, który poprosi u¿ytkownika o podanie liczby od 1 do 7 i wyœwietli odpowiadaj¹cy mu dzieñ tygodnia.
void task7()
{
	int	diaDeLaSemana;
	std::cout << "Podaj liczbê od 1 do 7 \n";
	std::cin >> diaDeLaSemana;

	if (diaDeLaSemana == 1)
		std::cout << "Poniedzia³ek";
	
	if (diaDeLaSemana == 2)
		std::cout << "Wtorek";
	
	if (diaDeLaSemana == 3)
		std::cout << "Œroda";
	
	if (diaDeLaSemana == 4)
		std::cout << "Czwartek";
	
	if (diaDeLaSemana == 5)
		std::cout << "Pi¹tek";
	
	if (diaDeLaSemana == 6)
		std::cout << "Sobota";
	
	if (diaDeLaSemana == 7)
		std::cout << "Niedziela";
	
	if (diaDeLaSemana <= 0)
		std::cout << "B³êdna liczba";
	
	if (diaDeLaSemana > 7)
		std::cout << "B³êdna liczba";

}


//Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i wyœwietli wiêksz¹ z nich.
void task8()
{
	int NumeroUno, NumeroDos ;
	std::cout << "Podaj pierwsz¹ lcizbê ca³kowit¹\n";
	std::cin >> NumeroUno;
	std::cout << "Podaj drug¹ lcizbê ca³kowit¹\n";
	std::cin >> NumeroDos;

	if (NumeroUno > NumeroDos)
		std::cout << NumeroUno;
	else
		std::cout << NumeroDos;


}

void task14()
{
	int day, month, year;
	std::cout << "Podaj dzieñ";
	std::cin >> day;
	std::cout << "Podaj miesi¹c";
	std::cin >> month;
	std::cout << "Podaj rok";
	std::cin >> year;

	if ( (day > 0 && day =< 31) 
		&& month > 0 && month <=12
		
		&& (day < 31 (month == 4 || month == 6 || month == 9 || month ==))
		&& month > 0 && month =< 12  )
		std::cout << "siuu";
}



int main()
{
	setlocale(LC_CTYPE, "Polish");
	//task();
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task14();
}



/*
Operatory warunkowe:
> - wiêksze
< - mniejsze
>= - wiêksze b¹dŸ równe
<= - mniejsze b¹dŸ równe
== - równe
!= - ró¿ne
Operatory logiczne:
&& - AND
|| - OR
! - NOT
								  ALBO
 a	b	a && b	a || b	!a		a XOR b
 F	F	  F		   F	T			F
 F	T	  F		   T	T			T
 T	F	  F		   T	F			T
 T	T	  T		   T	F			F
 F - false
 T - true
*/
/*
*.
*.
*.
*. 
*. 
*. Napisz program, który poprosi u¿ytkownika o podanie roku i sprawdzi, czy jest to rok przestêpny. Wyœwietl odpowiedni komunikat.
*. Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyœwietl odpowiedni komunikat.
*. Napisz program, który poprosi u¿ytkownika o podanie masy cia³a (w kilogramach) i wzrostu (w metrach).
Na podstawie tych danych oblicz wskaŸnik BMI (Body Mass Index) i wyœwietl odpowiedni komunikat informuj¹cy o stanie zdrowia.
*. Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci trzech odcinków i sprawdzi, czy mo¿na zbudowaæ z nich trójk¹t. Wyœwietl odpowiedni komunikat.
*. Napisz program, który poprosi u¿ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, jeœli jest to mo¿liwe. Wyœwietl wynik lub odpowiedni komunikat, jeœli liczba jest ujemna.
*. Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
*/


