
#include <iostream>

void task1()
{
    int nwd, numeroUno, numeroSecundo;

    std::cout << "Podaj liczb�:\n";
    std::cin >> numeroUno;
    std::cout << "Podaj drug� liczb�:\n";
    std::cin >> numeroSecundo;

    nwd = (numeroUno < numeroSecundo) ? numeroUno : numeroSecundo;

    while (numeroSecundo % nwd != 0 || numeroUno % nwd != 0)
    {
        nwd--;
    }
    std::cout << "Nwd wynosi: " << nwd;
}









int main()
{
    setlocale(LC_CTYPE, "Polish");
    task1();
}
