
#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;

    if (num < 100000 || num > 999999) {
        cout << "Error: - a 6 number\n";
    }
    else {
        int firstSum = (num / 100000) + (num / 10000 % 10) + (num / 1000 % 10);
        int secondSum = (num / 100 % 10) + (num / 10 % 10) + (num % 10);

        if (firstSum == secondSum) {
            cout << "Lucky number\n";
        }
        else {
            cout << "Not a lucky number\n";
        }
    }

    return 0;
}
