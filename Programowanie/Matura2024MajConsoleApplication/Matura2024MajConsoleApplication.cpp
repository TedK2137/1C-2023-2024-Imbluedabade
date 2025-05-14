#include <iostream>
#include <fstream>
#include <vector>

int getOddShortcut(int n) {
    int m = 0, multiplier = 1;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 1) {
            m += digit * multiplier;
            multiplier *= 10;
        }
        n /= 10;
    }
    return m;
}

int gcd(int a, int b) {
    while (b > 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    std::vector<int> numbers_skrot;
    {
        std::ifstream file("skrot.txt");
        int number;
        while (file >> number) {
            numbers_skrot.push_back(number);
        }
    }

    std::vector<int> numbers_skrot2;
    {
        std::ifstream file("skrot2.txt");
        int number;
        while (file >> number) {
            numbers_skrot2.push_back(number);
        }
    }

    std::cout << "Zadanie 3.2\n";
    int countNoShortcut = 0, maxNoShortcut = -1;
    for (int n : numbers_skrot) {
        if (getOddShortcut(n) == 0) {
            countNoShortcut++;
            if (n > maxNoShortcut) {
                maxNoShortcut = n;
            }
        }
    }
    std::cout << countNoShortcut << "\n";
    if (countNoShortcut > 0) {
        std::cout << maxNoShortcut << "\n";
    }

    std::cout << "Zadanie 3.3\n";
    for (int n : numbers_skrot2) {
        int shortcut = getOddShortcut(n);
        if (gcd(n, shortcut) == 7) {
            std::cout << n << "\n";
        }
    }
}