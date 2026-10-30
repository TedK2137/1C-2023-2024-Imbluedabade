/*
Zadanie – Fiszki do nauki słówek

Napisz aplikację w .NET MAUI, która pomaga powtarzać angielskie
słówka. Całość umieść na jednej stronie MainPage, bez nawigacji.

Przygotuj w programie kolekcję fiszek. Każda fiszka powinna
przechowywać angielskie słowo i jego polskie tłumaczenie:
- apple – jabłko,
- house – dom,
- dog – pies,
- book – książka,
- bike – rower.

Aplikacja powinna zawierać:
- CarouselView wyświetlający angielskie słowo na każdej karcie,
- IndicatorView pokazujący aktualną pozycję wśród fiszek,
- przycisk „Pokaż tłumaczenie”,
- Label pod karuzelą, przeznaczony na polskie tłumaczenie,
- przycisk „Zacznij od początku”.

Działanie aplikacji:
- po uruchomieniu wyświetlana jest pierwsza fiszka,
- użytkownik przegląda fiszki, przesuwając karty,
- początkowo tłumaczenie jest ukryte,
- po naciśnięciu „Pokaż tłumaczenie” wyświetl tłumaczenie słowa
  z aktualnie widocznej karty,
- po zmianie fiszki wyczyść tłumaczenie, aby użytkownik mógł
  samodzielnie przypomnieć sobie znaczenie kolejnego słowa,
- przycisk „Zacznij od początku” wyświetla pierwszą fiszkę
  i również czyści tłumaczenie.

Angielskie słowo na karcie wyświetl za pomocą bindingu.

Przykład:
Aktualna karta: house
Przed naciśnięciem przycisku: tłumaczenie niewidoczne.
Po naciśnięciu „Pokaż tłumaczenie”: dom.
Po przejściu do kolejnej fiszki: tłumaczenie ponownie niewidoczne.
*/

using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Windows.Input;

namespace VocabularyFlashcardsMauiApp
{
    public partial class MainPage : ContentPage, INotifyPropertyChanged
    {
        private int currentPosition;
        private string polishTranslation = "";

        public ObservableCollection<Flashcard> Flashcards { get; } =
            new ObservableCollection<Flashcard>
            {
                new Flashcard("apple", "jabłko"),
                new Flashcard("house", "dom"),
                new Flashcard("dog", "pies"),
                new Flashcard("book", "książka"),
                new Flashcard("bike", "rower")
            };

        public int CurrentPosition
        {
            get => currentPosition;
            set
            {
                if (currentPosition != value)
                {
                    currentPosition = value;
                    OnPropertyChanged();
                    PolishTranslation = "";
                }
            }
        }

        public string PolishTranslation
        {
            get => polishTranslation;
            set
            {
                polishTranslation = value;
                OnPropertyChanged();
            }
        }

        public ICommand ShowTranslation { get; }
        public ICommand RestartFlashcards { get; }

        public MainPage()
        {
            InitializeComponent();

            ShowTranslation = new Command(DisplayTranslation);
            RestartFlashcards = new Command(Restart);

            BindingContext = this;
        }

        private void DisplayTranslation()
        {
            if (CurrentPosition >= 0 &&
                CurrentPosition < Flashcards.Count)
            {
                PolishTranslation =
                    Flashcards[CurrentPosition].PolishWord;
            }
        }

        private void Restart()
        {
            CurrentPosition = 0;
            PolishTranslation = "";
        }

        public new event PropertyChangedEventHandler? PropertyChanged;

        protected new void OnPropertyChanged(
            [CallerMemberName] string? propertyName = null)
        {
            PropertyChanged?.Invoke(
                this,
                new PropertyChangedEventArgs(propertyName));
        }
    }

    public class Flashcard
    {
        public string EnglishWord { get; set; }
        public string PolishWord { get; set; }

        public Flashcard(string englishWord, string polishWord)
        {
            EnglishWord = englishWord;
            PolishWord = polishWord;
        }
    }
}