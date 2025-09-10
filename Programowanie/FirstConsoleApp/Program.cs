// See https://aka.ms/new-console-template for more information
Console.Write("Hello, World!\n");
Console.WriteLine("Hello, World!");

string name = "Jan";
string surname = "Kowalski";
Console.WriteLine("Wassap" + " " + name + " " + surname + " " + "skibidi");
Console.WriteLine("Witaj {0} {1} tutaj!!!!", name, surname);
Console.WriteLine($"Witaj {name} {surname} tutaj!!!!");

Console.WriteLine("Prędkość to km\\h");
Console.WriteLine(@"Prędkość to km\h");

int firstNumber = 5;
int secondNumber = firstNumber;
secondNumber++;
Console.WriteLine($"Pierwsza liczba to {firstNumber}");
Console.WriteLine($"Druga liczba to {secondNumber}");

//-------------------------------------------------------------------------------------------------------------------------

//przekazywanie przez wartość

void ParametrTest_v1(int p)
{
    Console.WriteLine($"Parametr w parametrTest_v1 {p}");
    p++;
    Console.WriteLine($"Parametr w parametrTest_v1 {p}");
}

firstNumber = 15;
Console.WriteLine($"firstNumber przed {firstNumber}");
ParametrTest_v1(firstNumber);
Console.WriteLine($"firstNumber po {firstNumber}");

