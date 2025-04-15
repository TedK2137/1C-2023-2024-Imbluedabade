#include <iostream>
#include <fstream>
#include <vector>

int getReversed(int number) {
    int reversed = 0;
    while (number > 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    return reversed;
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}


int main() {
    std::ifstream file("liczby.txt");
    std::vector<int> numbers;
    int number;
    while (file >> number) {
        numbers.push_back(number);
    }
    file.close();

    // Zadanie 4.1
    std::cout << "Zadanie 4.1\n";
    for (int i = 0; i < numbers.size(); i++) {
        int reversed = getReversed(numbers[i]);
        if (reversed % 17 == 0) {
            std::cout << reversed << "\n";
        }
    }

    // Zadanie 4.2
    std::cout << "Zadanie 4.2\n";
    int maxDifference = 0;
    int numberWithMaxDifference = -1;
    for (int i = 0; i < numbers.size(); i++) {
        int reversed = getReversed(numbers[i]);
        int difference = numbers[i] - reversed;
        if (difference < 0) {
            difference = -difference;
        }
        if (difference > maxDifference) {
            maxDifference = difference;
            numberWithMaxDifference = numbers[i];
        }
    }
    if (numberWithMaxDifference != -1) {
        std::cout << numberWithMaxDifference << " " << maxDifference << "\n";
    }

    // Zadanie 4.3
    std::cout << "Zadanie 4.3\n";
    for (int i = 0; i < numbers.size(); i++) {
        if (isPrime(numbers[i])) {
            int reversed = getReversed(numbers[i]);
            if (isPrime(reversed)) {
                std::cout << numbers[i] << "\n";
            }
        }
    }

    // Zadanie 4.4
    std::cout << "Zadanie 4.4\n";
    std::vector<int> uniqueNumbers;
    std::vector<int> counts;

    for (int i = 0; i < numbers.size(); i++) {
        bool found = false;
        for (int j = 0; j < uniqueNumbers.size(); j++) {
            if (numbers[i] == uniqueNumbers[j]) {
                counts[j]++;
                found = true;
                break;
            }
        }
        if (!found) {
            uniqueNumbers.push_back(numbers[i]);
            counts.push_back(1);
        }
    }

    int uniqueCount = uniqueNumbers.size();
    int countTwo = 0;
    int countThree = 0;

    for (int i = 0; i < counts.size(); i++) {
        if (counts[i] == 2) {
            countTwo++;
        }
        if (counts[i] == 3) {
            countThree++;
        }
    }
    std::cout << uniqueCount << " " << countTwo << " " << countThree << "\n";

    return 0;
}