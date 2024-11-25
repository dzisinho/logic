
#include <iostream>
using namespace std;
int main() {
    int num, maxNum;
    cin >> maxNum; 

    for (int i = 1; i < 7; ++i) {
        cin >> num;
        if (num > maxNum) {
            maxNum = num;
        }
    }

    cout << "Maximum number: " << maxNum << "\n";

    return 0;
}
