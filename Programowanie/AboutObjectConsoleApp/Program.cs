using System.Drawing;

namespace AboutObjectConsoleApp;

internal class Program
{
    private int x;
    private int y;

    public Point()
    {
        x = 5;
        y = 8;
    }

    public Point(int a, int b)
    {
        x = a;
        y = b;
    }

    public void Show()
    {
               Console.WriteLine($"x = {x}, y = {y}");
    }
}
