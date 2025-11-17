using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTasksConsoleApp.Styczeń2023_1Mobilna
{
    internal class Task3
    {
        /*******************************************
         klasa: Notatka
         opis: reprezentuje notatkę
         pola: notesCount - przechowuje ilość notatek 
               id - przechowuje unikalny identyfikator notatki
               noteTitle - przechowuje tytuł notatki
               noteContent - przechowuje treść notatki
         autor: 202122334
        *******************************************/
        public class Notatka
        {
            private static int notesCount;
            private int id;
            protected string noteTitle;
            protected string noteContent;

            public Notatka(string title, string content)
            {
                notesCount++;
                this.id = notesCount;
                this.noteTitle = title;
                this.noteContent = content;
            }

            public void DisplayNote()
            {
                Console.WriteLine($"\nNotatka #{id}");
                Console.WriteLine($"Tytuł: {noteTitle}");
                Console.WriteLine($"Treść: {noteContent}");
            }

            public void Diagnostics()
            {
                Console.WriteLine($"Ilość notatek: {notesCount}; Identyfikator notatki: {id}; Tytuł notatki: {noteTitle}; Zawartość notatki: {noteContent}");
            }
        }
        public void Task()
        {
            Notatka notatka1 = new Notatka("Lista zakupów", "Woda, chleb, żurek, amol ");
            Notatka notatka2 = new Notatka("half-life 3", "half-life 3, half-life 3, half-life 3");
            notatka1.DisplayNote();
            notatka2.DisplayNote();
            notatka1.Diagnostics();
            notatka2.Diagnostics();
        }
    }
}

