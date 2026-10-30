/*
Zadanie – Wypożyczalnia sprzętu sportowego

Napisz aplikację w .NET MAUI, która oblicza koszt wypożyczenia
wybranego sprzętu. Całość umieść na jednej stronie MainPage,
bez nawigacji.

Przygotuj w programie kolekcję sprzętu:
- Rower – 40 zł za dzień,
- Hulajnoga – 30 zł za dzień,
- Rolki – 20 zł za dzień,
- Kajak – 50 zł za dzień.

Aplikacja powinna zawierać:
- listę sprzętu – CollectionView z możliwością wyboru jednej pozycji;
  każdy element wyświetla nazwę sprzętu i cenę za dzień,
- imię i nazwisko klienta – Entry,
- liczbę dni wypożyczenia – Stepper od 1 do 7,
- Label pokazujący aktualną liczbę dni,
- ubezpieczenie – CheckBox,
- przycisk „Oblicz koszt”,
- Label wyświetlający podsumowanie.

Aktualna liczba dni powinna być wyświetlana za pomocą bindingu,
tak aby zmieniała się automatycznie wraz z wartością Steppera.

Ubezpieczenie kosztuje dodatkowo 5 zł za każdy dzień wypożyczenia.

Po naciśnięciu przycisku oblicz koszt i wyświetl:
- imię i nazwisko klienta,
- nazwę wybranego sprzętu,
- liczbę dni,
- informację o ubezpieczeniu,
- łączny koszt wypożyczenia.

Przed obliczeniem sprawdź, czy podano imię i nazwisko oraz wybrano
sprzęt. W razie brakujących danych wyświetl odpowiedni komunikat.

Przykład:
Klient: Jan Kowalski
Sprzęt: Rower
Liczba dni: 3
Ubezpieczenie: TAK
Koszt sprzętu: 3 × 40 zł = 120 zł
Ubezpieczenie: 3 × 5 zł = 15 zł
Łącznie: 135 zł
*/

using System.Collections.ObjectModel;
using System.Windows.Input;

namespace SportsEquipmentRentalMauiApp;

public partial class MainPage : ContentPage
{
    private string customerName = "";
    private double rentalDays = 1;
    private bool insuranceSelected;
    private Equipment? selectedEquipment;
    private string rentalSummary = "Wybierz sprzęt i uzupełnij dane.";

    public ObservableCollection<Equipment> EquipmentList { get; } =
        new ObservableCollection<Equipment>
        {
            new Equipment("Rower", 40m),
            new Equipment("Hulajnoga", 30m),
            new Equipment("Rolki", 20m),
            new Equipment("Kajak", 50m)
        };

    public string CustomerName
    {
        get => customerName;
        set
        {
            customerName = value;
            OnPropertyChanged();
        }
    }

    public double RentalDays
    {
        get => rentalDays;
        set
        {
            rentalDays = value;
            OnPropertyChanged();
        }
    }

    public bool InsuranceSelected
    {
        get => insuranceSelected;
        set
        {
            insuranceSelected = value;
            OnPropertyChanged();
        }
    }

    public Equipment? SelectedEquipment
    {
        get => selectedEquipment;
        set
        {
            selectedEquipment = value;
            OnPropertyChanged();
        }
    }

    public string RentalSummary
    {
        get => rentalSummary;
        set
        {
            rentalSummary = value;
            OnPropertyChanged();
        }
    }

    public ICommand CalculateRental { get; }

    public MainPage()
    {
        InitializeComponent();

        CalculateRental = new Command(CalculateCost);
        BindingContext = this;
    }

    private void CalculateCost()
    {
        if (string.IsNullOrWhiteSpace(CustomerName))
        {
            RentalSummary = "Podaj imię i nazwisko klienta.";
            return;
        }

        if (SelectedEquipment == null)
        {
            RentalSummary = "Wybierz sprzęt z listy.";
            return;
        }

        decimal equipmentCost =
            SelectedEquipment.DailyPrice * (decimal)RentalDays;

        decimal insuranceCost = InsuranceSelected
            ? 5m * (decimal)RentalDays
            : 0m;

        decimal totalCost = equipmentCost + insuranceCost;

        string insuranceInfo = InsuranceSelected ? "TAK" : "NIE";

        RentalSummary =
            $"Klient: {CustomerName}\n" +
            $"Sprzęt: {SelectedEquipment.Name}\n" +
            $"Liczba dni: {RentalDays:F0}\n" +
            $"Ubezpieczenie: {insuranceInfo}\n" +
            $"Koszt sprzętu: {equipmentCost:F2} zł\n" +
            $"Koszt ubezpieczenia: {insuranceCost:F2} zł\n" +
            $"Łącznie: {totalCost:F2} zł";
    }
}

public class Equipment
{
    public string Name { get; set; }
    public decimal DailyPrice { get; set; }

    public Equipment(string name, decimal dailyPrice)
    {
        Name = name;
        DailyPrice = dailyPrice;
    }
}