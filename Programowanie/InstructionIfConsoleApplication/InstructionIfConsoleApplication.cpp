
#include <iostream>

//napisz program kt�ry wy�wietli informacje czy liczba jest dodatnia czy nie.

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

//Napisz program, kt�ry wy�wietli informacje czy liczba jest z zakresu <1 ; 10).
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

//Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i sprawdzi, czy s� one r�wne.Wy�wietl odpowiedni komunikat.
void task4()
{
	int NumeroUno, NumeroDos;
	std::cout << "Podaj liczbe:\n";
	std::cin >> NumeroUno;
	std::cout << "Podaj liczbe:\n";
	std::cin >> NumeroDos;

	if (NumeroUno == NumeroDos)
		std::cout << "Liczby s� r�wne ";
	else
		std::cout << "Liczby nie s� r�wne ";


}

//Napisz program, kt�ry poprosi u�ytkownika o podanie wieku i sprawdzi, czy osoba jest pe�noletnia.Wy�wietl odpowiedni komunikat.
void task5()
{
	int edad;
	std::cout << "Podaj sw�j wiek:\n";
	std::cin >> edad;

	if (edad >= 18)
		std::cout << "Jeste� pe�noletni";
	else
		std::cout << "No piwo for you";


}

//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i obliczy jej warto�� bezwzgl�dn�.Wy�wietl wynik.
void task6()
{
	int entero;
	std::cout << "Podaj liczb� ca�kowit�:\n";
	std::cin >> entero;

	if (entero >= 0)
		std::cout << "Warto�� bezwzgl�dna liczby = " << entero << "\n";
	else
		std::cout << "Warto�� bezwzgl�dna liczby = " << entero * (-1);

}

//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby od 1 do 7 i wy�wietli odpowiadaj�cy mu dzie� tygodnia.
void task7()
{
	int	diaDeLaSemana;
	std::cout << "Podaj liczb� od 1 do 7 \n";
	std::cin >> diaDeLaSemana;

	if (diaDeLaSemana == 1)
		std::cout << "Poniedzia�ek";
	
	if (diaDeLaSemana == 2)
		std::cout << "Wtorek";
	
	if (diaDeLaSemana == 3)
		std::cout << "�roda";
	
	if (diaDeLaSemana == 4)
		std::cout << "Czwartek";
	
	if (diaDeLaSemana == 5)
		std::cout << "Pi�tek";
	
	if (diaDeLaSemana == 6)
		std::cout << "Sobota";
	
	if (diaDeLaSemana == 7)
		std::cout << "Niedziela";
	
	if (diaDeLaSemana <= 0)
		std::cout << "B��dna liczba";
	
	if (diaDeLaSemana > 7)
		std::cout << "B��dna liczba";

}


//Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i wy�wietli wi�ksz� z nich.
void task8()
{
	int NumeroUno, NumeroDos ;
	std::cout << "Podaj pierwsz� lcizb� ca�kowit�\n";
	std::cin >> NumeroUno;
	std::cout << "Podaj drug� lcizb� ca�kowit�\n";
	std::cin >> NumeroDos;

	if (NumeroUno > NumeroDos)
		std::cout << NumeroUno;
	else
		std::cout << NumeroDos;


}

void task14()
{
	int day, month, year;
	std::cout << "Podaj dzie�";
	std::cin >> day;
	std::cout << "Podaj miesi�c";
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
> - wi�ksze
< - mniejsze
>= - wi�ksze b�d� r�wne
<= - mniejsze b�d� r�wne
== - r�wne
!= - r�ne
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
*. Napisz program, kt�ry poprosi u�ytkownika o podanie roku i sprawdzi, czy jest to rok przest�pny. Wy�wietl odpowiedni komunikat.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i sprawdzi, czy jest ona podzielna zar�wno przez 3, jak i przez 5. Wy�wietl odpowiedni komunikat.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie masy cia�a (w kilogramach) i wzrostu (w metrach).
Na podstawie tych danych oblicz wska�nik BMI (Body Mass Index) i wy�wietl odpowiedni komunikat informuj�cy o stanie zdrowia.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci trzech odcink�w i sprawdzi, czy mo�na zbudowa� z nich tr�jk�t. Wy�wietl odpowiedni komunikat.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, je�li jest to mo�liwe. Wy�wietl wynik lub odpowiedni komunikat, je�li liczba jest ujemna.
*. Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
*/


