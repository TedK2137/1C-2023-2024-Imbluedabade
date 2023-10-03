// VariableConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Napisz program który wczyta liczbê od u¿ytkownika i j¹ wyœwietli na konsoli
void task1()
{
    
    std::cout << "podaj liczbe seksowny gnojku\n";
    int numeroUsuario;
    std::cin >> numeroUsuario;

    std::cout << "Podales " << numeroUsuario << "\n";

}

//program obliczaj¹cy œredni¹ arytmetyczn¹ dwóch liczb
void task2()
{
    long long NumeroUno;
    int NumeroDos;
    std::cout << "Podaj d³ugoœæ swojego piekielnika\n";
    std::cin >> NumeroUno;
    std::cout << "Podaj liczbê s³odkich kotków w twojej piwnicy\n";
    std::cin >> NumeroDos;

    long long NumeroPromedio;
    NumeroPromedio = (NumeroUno + NumeroDos) / 2;

    std::cout << "srednia to: " << NumeroPromedio << "\n";



}

//Program obliczaj¹cy pole prostok¹ta.
void task3()
{
    long long NumeroUno;
    int NumeroDos;
    std::cout << "Podaj d³ugoœæ 1szego boku\n";
    std::cin >> NumeroUno;
    std::cout << "Podaj d³ugoœæ drugiego boku\n";
    std::cin >> NumeroDos;

    long long area;
    area = NumeroUno * NumeroDos;
    
    std::cout << "pole to: " << area << "\n";

}

//Program obliczaj¹cy objêtoœæ sto¿ka.
void task4()
{
    int h, r;
    double V;
    std::cout << "Podaj wysokoœæ\n";
    std::cin >> h;
    std::cout << "Podaj promieñ\n";
    std::cin >> r;
    
    V = h * r * r * 3.14 * 1 / 3;
    std::cout << "objêtoœæ to: " << V << "\n";

}

//Program obliczaj¹cy pole ko³a.
void task5()
{
    double r, P ;
    std::cout << "Podaj promieñ ko³a\n";
    std::cin >> r;

    P = 3.14 * r * r;
    std::cout << "Pole to: " << P << "\n";




}












int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    task6();
}   

/* Zadania
*. Program obliczaj¹cy pole prostok¹ta.
*. Program obliczaj¹cy objêtoœæ sto¿ka.
*. Program obliczaj¹cy pole ko³a.
*. Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2
*. Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h
*. Program obliczaj¹cy objêtoœæ kuli o promieniu r
*. Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h
*. Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*. Stwórz program, który pobiera od u¿ytkownika d³ugoœæ w metrach i przelicza j¹ na centymetry i milimetry, wyœwietlaj¹c wynik.
*. Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.
*/








/* Notatka
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

