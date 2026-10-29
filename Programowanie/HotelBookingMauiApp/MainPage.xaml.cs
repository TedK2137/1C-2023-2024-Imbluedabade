
/*
Zadanie – Rezerwacja pokoju hotelowego
Napisz aplikację w .NET MAUI, która pozwala przygotować prostą rezerwację pokoju hotelowego.

Użytkownik powinien podać następujące informacje:
- Imię i nazwisko – Entry,
- Adres e-mail – Entry,
- Data przyjazdu – DatePicker,
- Liczba nocy – Stepper (od 1 do 14),
- Liczba osób – Stepper (od 1 do 4),
- Rodzaj pokoju – Picker:
  - Pokój jednoosobowy – 200 zł / noc,
  - Pokój dwuosobowy – 300 zł / noc,
  - Apartament – 500 zł / noc,
- Śniadanie – Switch – dodatkowo 40 zł za osobę za każdą noc,
- Miejsce parkingowe – CheckBox – dodatkowo 30 zł za każdą noc,
- przycisk Oblicz koszt – Button,
- Label wyświetlający podsumowanie rezerwacji.

Aktualna liczba nocy oraz liczba osób powinna być wyświetlana obok odpowiednich kontrolek Stepper. Wykorzystaj do tego binding, tak aby wartości zmieniały się automatycznie.
Po naciśnięciu przycisku Oblicz koszt aplikacja powinna obliczyć całkowity koszt pobytu.

Przykład:
Imię i nazwisko: Jan Kowalski
Data przyjazdu: 15.10.2026
Liczba nocy: 3
Liczba osób: 2
Pokój: Pokój dwuosobowy
Śniadanie: TAK
Parking: TAK
Koszt pokoju: 3 × 300 zł = 900 zł
Śniadanie: 3 × 2 × 40 zł = 240 zł
Parking: 3 × 30 zł = 90 zł
Łącznie: 1230 zł
W podsumowaniu wyświetl imię i nazwisko klienta, datę przyjazdu, wybrany rodzaj pokoju, liczbę nocy, liczbę osób oraz całkowity koszt rezerwacji.

Dodatkowe wymagania:
- użytkownik nie może wybrać daty przyjazdu wcześniejszej niż dzisiejsza,
- przed wykonaniem obliczeń sprawdź, czy użytkownik podał imię i nazwisko oraz wybrał rodzaj pokoju,
- jeśli dane są niepoprawne lub niekompletne, wyświetl odpowiedni komunikat.

Dla chętnych: dodaj Slider pozwalający ustawić rabat od 0% do 20%. Aktualna wartość rabatu powinna być wyświetlana za pomocą Label i bindingu. Rabat należy uwzględnić w końcowej cenie rezerwacji.

*/


namespace HotelBookingMauiApp
{
    public partial class MainPage : ContentPage
    {
        public DateTime TodayDate { get; } = DateTime.Today;

        private string guestName = "";
        public string GuestName
        {
            get => guestName;
            set
            {
                guestName = value;
                OnPropertyChanged();
            }
        }

        private string contactAddress = "";
        public string ContactAddress
        {
            get => contactAddress;
            set
            {
                contactAddress = value;
                OnPropertyChanged();
            }
        }

        private DateTime checkIn = DateTime.Today;
        public DateTime CheckIn
        {
            get => checkIn;
            set
            {
                checkIn = value;
                OnPropertyChanged();
            }
        }

        private int stayLength = 1;
        public int StayLength
        {
            get => stayLength;
            set
            {
                stayLength = value;
                OnPropertyChanged();
            }
        }

        private int guestCount = 1;
        public int GuestCount
        {
            get => guestCount;
            set
            {
                guestCount = value;
                OnPropertyChanged();
            }
        }

        public string[] RoomTypes { get; } =
        {
            "Pokój jednoosobowy",
            "Pokój dwuosobowy",
            "Apartament"
        };

        private string roomChoice = "";
        public string RoomChoice
        {
            get => roomChoice;
            set
            {
                roomChoice = value;
                OnPropertyChanged();
            }
        }

        private bool breakfastIncluded;
        public bool BreakfastIncluded
        {
            get => breakfastIncluded;
            set
            {
                breakfastIncluded = value;
                OnPropertyChanged();
            }
        }

        private bool parkingNeeded;
        public bool ParkingNeeded
        {
            get => parkingNeeded;
            set
            {
                parkingNeeded = value;
                OnPropertyChanged();
            }
        }

        private double discountRate;
        public double DiscountRate
        {
            get => discountRate;
            set
            {
                discountRate = value;
                OnPropertyChanged();
            }
        }

        private string bookingDetails = "Wprowadź dane i oblicz koszt.";
        public string BookingDetails
        {
            get => bookingDetails;
            set
            {
                bookingDetails = value;
                OnPropertyChanged();
            }
        }

        public Command CalculateBooking { get; }

        public MainPage()
        {
            InitializeComponent();

            CalculateBooking = new Command(CalculateTotal);
            BindingContext = this;
        }

        private void CalculateTotal()
        {
            if (string.IsNullOrWhiteSpace(GuestName))
            {
                BookingDetails = "Błąd: wpisz imię i nazwisko.";
                return;
            }

            if (string.IsNullOrWhiteSpace(ContactAddress) ||
                !ContactAddress.Contains("@") ||
                !ContactAddress.Contains("."))
            {
                BookingDetails = "Błąd: wpisz poprawny adres e-mail.";
                return;
            }

            if (string.IsNullOrWhiteSpace(RoomChoice))
            {
                BookingDetails = "Błąd: wybierz rodzaj pokoju.";
                return;
            }

            if (CheckIn.Date < TodayDate)
            {
                BookingDetails = "Błąd: data przyjazdu nie może być wcześniejsza niż dzisiaj.";
                return;
            }

            double nightlyRate = 0;

            if (RoomChoice == RoomTypes[0])
                nightlyRate = 200;
            else if (RoomChoice == RoomTypes[1])
                nightlyRate = 300;
            else if (RoomChoice == RoomTypes[2])
                nightlyRate = 500;

            double accommodationTotal = nightlyRate * StayLength;

            double breakfastTotal = BreakfastIncluded
                ? GuestCount * StayLength * 40
                : 0;

            double parkingTotal = ParkingNeeded
                ? StayLength * 30
                : 0;

            double bookingTotal =
                accommodationTotal + breakfastTotal + parkingTotal;

            double savedAmount = bookingTotal * DiscountRate / 100;
            double finalAmount = bookingTotal - savedAmount;

            BookingDetails =
                $"Klient: {GuestName}\n" +
                $"E-mail: {ContactAddress}\n" +
                $"Data przyjazdu: {CheckIn:dd.MM.yyyy}\n" +
                $"Rodzaj pokoju: {RoomChoice}\n" +
                $"Liczba nocy: {StayLength}\n" +
                $"Liczba osób: {GuestCount}\n" +
                $"Śniadanie: {(BreakfastIncluded ? "TAK" : "NIE")}\n" +
                $"Parking: {(ParkingNeeded ? "TAK" : "NIE")}\n\n" +
                $"Nocleg: {StayLength} x {nightlyRate:F2} zł = {accommodationTotal:F2} zł\n" +
                $"Śniadania: {breakfastTotal:F2} zł\n" +
                $"Parking: {parkingTotal:F2} zł\n" +
                $"Kwota przed rabatem: {bookingTotal:F2} zł\n" +
                $"Rabat ({DiscountRate:F0}%): {savedAmount:F2} zł\n" +
                $"DO ZAPŁATY: {finalAmount:F2} zł";
        }
    }
}
