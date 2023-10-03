// VariableConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Napisz program kt�ry wczyta liczb� od u�ytkownika i j� wy�wietli na konsoli
void task1()
{
    
    std::cout << "podaj liczbe seksowny gnojku\n";
    int numeroUsuario;
    std::cin >> numeroUsuario;

    std::cout << "Podales " << numeroUsuario << "\n";

}

//program obliczaj�cy �redni� arytmetyczn� dw�ch liczb
void task2()
{
    long long NumeroUno;
    int NumeroDos;
    std::cout << "Podaj d�ugo�� swojego piekielnika\n";
    std::cin >> NumeroUno;
    std::cout << "Podaj liczb� s�odkich kotk�w w twojej piwnicy\n";
    std::cin >> NumeroDos;

    long long NumeroPromedio;
    NumeroPromedio = (NumeroUno + NumeroDos) / 2;

    std::cout << "srednia to: " << NumeroPromedio << "\n";



}

//Program obliczaj�cy pole prostok�ta.
void task3()
{
    long long NumeroUno;
    int NumeroDos;
    std::cout << "Podaj d�ugo�� 1szego boku\n";
    std::cin >> NumeroUno;
    std::cout << "Podaj d�ugo�� drugiego boku\n";
    std::cin >> NumeroDos;

    long long area;
    area = NumeroUno * NumeroDos;
    
    std::cout << "pole to: " << area << "\n";

}

//Program obliczaj�cy obj�to�� sto�ka.
void task4()
{
    int h, r;
    double V;
    std::cout << "Podaj wysoko��\n";
    std::cin >> h;
    std::cout << "Podaj promie�\n";
    std::cin >> r;
    
    V = h * r * r * 3.14 * 1 / 3;
    std::cout << "obj�to�� to: " << V << "\n";

}

//Program obliczaj�cy pole ko�a.
void task5()
{
    double r, P ;
    std::cout << "Podaj promie� ko�a\n";
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
*. Program obliczaj�cy pole prostok�ta.
*. Program obliczaj�cy obj�to�� sto�ka.
*. Program obliczaj�cy pole ko�a.
*. Program obliczaj�cy warto�� wyra�enia a^2 + b^2
*. Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h
*. Program obliczaj�cy obj�to�� kuli o promieniu r
*. Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h
*. Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*. Stw�rz program, kt�ry pobiera od u�ytkownika d�ugo�� w metrach i przelicza j� na centymetry i milimetry, wy�wietlaj�c wynik.
*. Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany.
*/








/* Notatka
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

