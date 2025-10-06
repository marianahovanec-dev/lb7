#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n, m;
    cout << "Введіть кількість рядків матриці: ";
    cin >> n;
    cout << "Введіть кількість стовпців матриці: ";
    cin >> m;

    int A[100][100]; 
    cout << "Введіть елементи матриці:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    int sum = 0;
  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i % 2 == 0 && j % 2 == 0) { 
                sum += A[i][j];
            }
        }
    }

    cout << "Сума елементів з парними індексами = " << sum << endl;

    return 0;
}
