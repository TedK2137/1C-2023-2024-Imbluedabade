// VariableConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //Napisz program który wczyta liczbê od u¿ytkownika i j¹ wyœwietli na konsoli
    std::cout << "podaj liczbe seksowny gnojku\n";
    int numeroUsuario;
    std::cin >> numeroUsuario;

    std::cout << "Podales " << numeroUsuario << "\n";
}   


/*
Algorytm - skoñczony zbiór instrukcji,
           który rozwi¹zuje zadany problem.
           Okreœla te¿ kolejnoœæ wykonywanych instrukcji.
Zapis algorytmu:
* rysunki
* opis s³owny
* w punktach
* schemat blokowy
* kod Ÿród³owy danego jêzyka programowania
* pseudokod

Zmienna - pewien obszar w pamiêci operacyjnej,
          w której mo¿na w danej chwili przechowaæ tylko jedn¹ dan¹.

Instukcja deklaracji zmiennej:
typ_zmiennej nazwa_zmiennej;

Typ zmiennej - wielkoœæ obszaru pamiêci, interpretacja ci¹gu bitów
int - 4 bajtowa liczba ca³kowita ze znakiem <-2 147 483 648, 2 147 483 647>
short - 2 bajtowa liczba ca³kowita ze znakiem <-32 768, 32 767>
long - to samo co int
longlong - 8 bajtowa liczba ze znakiem <-9 223 372 036 854 775 808 , 9 223 372 036 854 775 807>

unsigned - zmienna bez znaku <0, 2*max + 1>

float - 4 bajtowa liczba rzeczywista, dok³adnoœc 6-7 cyfr po przecinku
double - 8 bajtowa liczba rzeczywista, dok³adnoœc 15-16 cyfr po przecinku
longdouble - 12 bajtowa liczba rzeczywista, dok³adnoœc 19-20 cyfr po przecinku

Nazwa zmiennej - nazwa obszru w pamiêci, identyfikator
Warunki niezbêdne:
* Dozwolone znaki:
    - Alfabet angielski aA-zZ
    - Cyfry arabskie 0-9
    - podkreœlenie (pod³oga) _
* Pierwszym znakiem nie mo¿e byæ cyfra
* Unikalny w swoim zakresie widocznoœci
* Nie mo¿e byæ to s³owo kluczowe (zarezerwowane) danego jêzyka

Warunki programistów:
* Nazwa zmiennej powinna oddawaæ charakter przechowywanych danych
* Je¿eli nazwa sk³ada siê z wielu wyrazów u¿ywamy w miejsce spacji,
  albo pod³ogi albo zapisujemy drugi wyraz z du¿ej litery
* Piszemy po angielsku


*/

