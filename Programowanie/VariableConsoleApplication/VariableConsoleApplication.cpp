// VariableConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //Napisz program kt�ry wczyta liczb� od u�ytkownika i j� wy�wietli na konsoli
    std::cout << "podaj liczbe seksowny gnojku\n";
    int numeroUsuario;
    std::cin >> numeroUsuario;

    std::cout << "Podales " << numeroUsuario << "\n";
}   


/*
Algorytm - sko�czony zbi�r instrukcji,
           kt�ry rozwi�zuje zadany problem.
           Okre�la te� kolejno�� wykonywanych instrukcji.
Zapis algorytmu:
* rysunki
* opis s�owny
* w punktach
* schemat blokowy
* kod �r�d�owy danego j�zyka programowania
* pseudokod

Zmienna - pewien obszar w pami�ci operacyjnej,
          w kt�rej mo�na w danej chwili przechowa� tylko jedn� dan�.

Instukcja deklaracji zmiennej:
typ_zmiennej nazwa_zmiennej;

Typ zmiennej - wielko�� obszaru pami�ci, interpretacja ci�gu bit�w
int - 4 bajtowa liczba ca�kowita ze znakiem <-2 147 483 648, 2 147 483 647>
short - 2 bajtowa liczba ca�kowita ze znakiem <-32 768, 32 767>
long - to samo co int
longlong - 8 bajtowa liczba ze znakiem <-9 223 372 036 854 775 808 , 9 223 372 036 854 775 807>

unsigned - zmienna bez znaku <0, 2*max + 1>

float - 4 bajtowa liczba rzeczywista, dok�adno�c 6-7 cyfr po przecinku
double - 8 bajtowa liczba rzeczywista, dok�adno�c 15-16 cyfr po przecinku
longdouble - 12 bajtowa liczba rzeczywista, dok�adno�c 19-20 cyfr po przecinku

Nazwa zmiennej - nazwa obszru w pami�ci, identyfikator
Warunki niezb�dne:
* Dozwolone znaki:
    - Alfabet angielski aA-zZ
    - Cyfry arabskie 0-9
    - podkre�lenie (pod�oga) _
* Pierwszym znakiem nie mo�e by� cyfra
* Unikalny w swoim zakresie widoczno�ci
* Nie mo�e by� to s�owo kluczowe (zarezerwowane) danego j�zyka

Warunki programist�w:
* Nazwa zmiennej powinna oddawa� charakter przechowywanych danych
* Je�eli nazwa sk�ada si� z wielu wyraz�w u�ywamy w miejsce spacji,
  albo pod�ogi albo zapisujemy drugi wyraz z du�ej litery
* Piszemy po angielsku


*/

