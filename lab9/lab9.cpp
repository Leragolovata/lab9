#include <iostream>
using namespace std;

int main() {
    double num;
    int countPositive = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Введіть число " << i << ": ";
        cin >> num;

        if (num > 0) {
            countPositive++;
        }
    }

    cout << "Кількість додатних чисел: " << countPositive << endl;

    return 0;
}
