#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    cout << "Введіть n: ";
    cin >> n;

    int d = n % 10;
    int tens = (n / 10) % 10;
    int hund = n / 100;

    int m;
    for (int x = hund; x <= 9; x++) {
        m = x * 111;
        if (m >= n) break;
    }

    cout << "Результат: " << m;
    return 0;
}