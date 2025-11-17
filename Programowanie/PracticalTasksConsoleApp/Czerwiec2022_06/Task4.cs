using System;
using System.Collections.Generic;
using System.Diagnostics.Metrics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTasksConsoleApp.Czerwiec2022_06
{
    class Osoba
    {
        private int id;
        private string name;
        public static int classInstancesCount = 0;

        public Osoba()
        {
            classInstancesCount++;
            this.id = 0;
            this.name = string.Empty;
        }

        public Osoba(int id, string name)
        {
            classInstancesCount++;
            this.id = id;
            this.name = name;
        }

        public Osoba(Osoba nextOsoba)
        {
            classInstancesCount++;
            this.id = nextOsoba.id;
            this.name = nextOsoba.name;
        }
        public void writeName(string argument)
        {
            if (string.IsNullOrEmpty(argument) || string.IsNullOrEmpty(name))
            {
                Console.WriteLine("Brak danych");
            }
            else
            {
                Console.WriteLine($"Cześć {argument}, mam na imię {this.name}");
            }
        }
    }
    class Task4
    {
       public void Task()
        {
            Console.WriteLine($"Liczba zarejestrowanych osób: {Osoba.classInstancesCount}");

            Osoba osoba1 = new Osoba();

            Console.WriteLine("Podaj id osoby: ");
            int id = int.Parse(Console.ReadLine());
            Console.WriteLine("Podaj imię osoby: ");
            string name = Console.ReadLine();

            Osoba osoba2 = new Osoba(id, name);
            Osoba osoba3 = new Osoba(osoba2);

            osoba1.writeName("Jan");
            osoba2.writeName("Jan");
            osoba3.writeName("Jan");

            Console.WriteLine($"Liczba zarejestrowanych osób: {Osoba.classInstancesCount}");
        }
    }
}
