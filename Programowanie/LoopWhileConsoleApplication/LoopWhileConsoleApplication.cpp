
#include <iostream>

void task1()
{
    int nwd, numeroUno, numeroSecundo;

    std::cout << "Podaj liczbê:\n";
    std::cin >> numeroUno;
    std::cout << "Podaj drug¹ liczbê:\n";
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

    std::cout << "Podaj ae liczbê:\n";
    std::cin >> tmpNumeroUno;
    std::cout << "Podaj ae drug¹ liczbê:\n";
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

void task3()
{
	int number;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;
	//wersja 1
	//obliczam iloœæ cyfr
	int tmpNumber = number;
	int numberOfDigit = 1;
	while (tmpNumber >= 10)
	{
		numberOfDigit++;
		tmpNumber = tmpNumber / 10;
	}

	//liczê 10 do potêgi numberOfDigit - 1
	//liczê 10 do potêgi (numberOfDigit - 1)
	int leftDivided = 1;
	while (numberOfDigit != 1)
	{
		leftDivided *= 10;
		numberOfDigit--;
	}
	int rightDivided = 10;
	int leftNumber = number;
	int rightNumber = number;

	bool isPalindrome = true;
	while (leftNumber > 10)
	{
		int leftDigit = leftNumber / leftDivided;
		int rightDigit = rightNumber % rightDivided;
		if (leftDigit != rightDigit)
		{
			isPalindrome = false;
			break;
		}

		leftNumber = leftNumber % leftDivided;
		rightNumber = rightNumber / rightDivided;

		leftDivided = leftDivided / 10;
	}

	if (isPalindrome /*== true*/)
		std::cout << "Liczba jest palindromem\n";
	else
		std::cout << "Liczba nie jest palindromem\n";
}







int main()
{
    setlocale(LC_CTYPE, "Polish");
    //task1();
    //task2();
    taska3();
}
