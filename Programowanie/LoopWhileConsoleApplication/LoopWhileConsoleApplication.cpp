
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

void task2()
{
    
    int dividend = 2, nwd = 1;
    int tmpNumeroUno, tmpNumeroSecundo;

    std::cout << "Podaj ae liczb�:\n";
    std::cin >> tmpNumeroUno;
    std::cout << "Podaj ae drug� liczb�:\n";
    std::cin >> tmpNumeroSecundo;

    while (tmpNumeroUno >= dividend
        && tmpNumeroSecundo >= dividend)
    {
        if (tmpNumeroUno % dividend == 0
            && tmpNumeroSecundo % dividend == 0)
        {
            tmpNumeroUno = tmpNumeroUno / dividend;
            tmpNumeroSecundo = tmpNumeroSecundo / dividend;
        }
        else
            dividend++;
    }
    std::cout << "NWD wynosi: " << nwd << "\n";
}









int main()
{
    setlocale(LC_CTYPE, "Polish");
    //task1();
    task2();
}
