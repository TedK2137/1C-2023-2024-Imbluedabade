using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTasksConsoleApp.Czerwiec2023_06
{

    internal class Task2
    {

        /******************************************************
        nazwa klasy: Film
        pola: title - przechowuje tytuł filmu
        liczbaWypozyczen - przechowuje liczbę wypożyczeń filmu
        metody: UstawTytul(string nowyTytul), void – ustawia tytuł filmu
                PobierzTytul(), string – zwraca tytuł filmu
                PobierzLiczbaWypozyczen(), int – zwraca liczbę wypożyczeń
                InkrementujLiczbaWypozyczen(), void – inkrementuje liczbę wypożyczeń
                informacje: Klasa reprezentuje film w systemie wirtualnej wypożyczalni
        autor: 123123123
        *****************************************************/
        public class Film
        {
            private string tytul;
            private int liczbaWypozyczen;

            public Film()
            {
                tytul = string.Empty;
                liczbaWypozyczen = 0;
            }

            public void UstawTytul(string nowyTytul)
            {
                if (nowyTytul.Length <= 20)
                {
                    tytul = nowyTytul;
                }
                else
                {
                    throw new ArgumentException("Tytuł może mieć maksymalnie 20 znaków.");
                }
            }

            public string PobierzTytul()
            {
                return tytul;
            }

            public int PobierzLiczbaWypozyczen()
            {
                return liczbaWypozyczen;
            }

            public void InkrementujLiczbaWypozyczen()
            {
                liczbaWypozyczen++;
            }
        }

        public static void Task()
        {
            Film film = new Film();
            Console.WriteLine("Początkowy tytuł: " + film.PobierzTytul());
            Console.WriteLine("Początkowa liczba wypożyczeń: " + film.PobierzLiczbaWypozyczen());
            film.UstawTytul("Incepcja");
            Console.WriteLine("Tytuł po ustawieniu: " + film.PobierzTytul());
            Console.WriteLine("Liczba wypożyczeń: " + film.PobierzLiczbaWypozyczen());
            Console.WriteLine("Liczba wypożyczeń przed inkrementacją: " + film.PobierzLiczbaWypozyczen());
            film.InkrementujLiczbaWypozyczen();
            Console.WriteLine("Liczba wypożyczeń po inkrementacji: " + film.PobierzLiczbaWypozyczen());
        }
    }
}