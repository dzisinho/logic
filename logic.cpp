
#include <iostream>
using namespace std;
int main() {
    int number;
    cin >> number;

    if (number < 1000 || number > 9999) {
        cout << "Error: Not a four-digit number\n";
    }
    else {
        int firstDigit = number / 1000;
        int secondDigit = (number / 100) % 10;
        int thirdDigit = (number / 10) % 10;
        int fourthDigit = number % 10;

        int swappNumber = secondDigit * 1000 + firstDigit * 100 + fourthDigit * 10 + thirdDigit;

        cout << "Swapped number: " << swappNumber << "\n";
    }

    return 0;
}
