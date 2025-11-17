using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTasksConsoleApp.Styczen2025_1
{
    class Device
    {
        /******************************************************************** 
         nazwa:                 <displayMessage>
         opis:                  <Metoda wyświetlająca komunikat na konsoli>
         parametry:             <string message - komunikat do wyświetlenia>
         zwracany typ i opis:   <brak>
         autor:                 <101110>
        ********************************************************************/
        public void DisplayMessage(string message)
        {
            Console.WriteLine(""+message);
        }
    }
    class WashingMashine : Device
    {
        private int washingProgram = 0;

        public int SetWashingProgram(int washingProgram)
        {
            if (washingProgram < 1 || washingProgram > 12)
            {
                DisplayMessage("Podano niepoprawny numer programu");
                this.washingProgram = 0;
            }
            else
            {
                this.washingProgram = washingProgram;
                DisplayMessage("Program został ustawiony");
            }
            return this.washingProgram;
        }
    }
    class Vacuum : Device
    {
        private bool vacuumStatus = false;

        public void On()
        {
            if (vacuumStatus == false)
            {
                vacuumStatus = true;
                DisplayMessage("Odkurzacz włączono");
            }
        }

        public void Off()
        {
            if (vacuumStatus == true)
            {
                vacuumStatus = false;
                DisplayMessage("Odkurzacz wyłączono");
            }
            else
            {
                DisplayMessage("Odkurzacz jest już wyłączony");
            }
        }
    }
    class Task5
    {
        public void Task()
        {
            WashingMashine washingMashine = new WashingMashine();
            Vacuum vacuum = new Vacuum();

            Console.WriteLine("Podaj numer programu prania (1-12): ");
            washingMashine.SetWashingProgram(int.Parse(Console.ReadLine()));

            vacuum.On();
            vacuum.On();
            vacuum.On();

            vacuum.DisplayMessage("Odkurzacz wyładował się");

            vacuum.Off();
        }
    }
}
