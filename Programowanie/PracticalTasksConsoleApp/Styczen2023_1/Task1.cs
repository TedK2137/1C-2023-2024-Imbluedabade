using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTasksConsoleApp.Styczen2023_1
{
    internal class Task1
    {
        public void Task()
        {
            Console.WriteLine("Wprowadź liczbę a:");
            int a = int.Parse(Console.ReadLine());
            if (a < 0)
                Console.WriteLine("Podaj dodatnie liczby");
            Console.WriteLine("Wprowadź liczbę b:");
            int b = int.Parse(Console.ReadLine());
            Console.WriteLine("Podaj dodatnie liczby");
            Console.WriteLine($"NWD liczb wynosi: {NWD(a, b)}");
        }

        public static int NWD(int a, int b)
        {
            while (a != b)
            {
                if (a > b)
                {
                    a -= b;
                }
                else
                    b -= a;
            }
            return a;
        }

        /************************************************************************
        Nazwa funkcji: NWD
        Opis funkcji: Szuka największego wspólnego dzielnika podanych liczb
        Parametry: a - pierwsza liczba, b - druga liczba
        Zwracany typ i opis: zwraca zmienną typu int, liczbę będącą największym wspólnym dzielnikiem
        Autor: 1234567890
        ************************************************************************/
    }
}

