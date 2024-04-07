#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int PROGRESSION() {
    setlocale(LC_ALL, "RU");

    char repeat;
    do {
        int N, A, D;
        cout << "Введите количество элементов N: ";
        while (!(cin >> N) || cin.peek() != '\n') {
            cout << "Ошибка! Вы должны ввести число. Введите количество элементов N: ";
            cin.clear();
            cin.ignore(123, '\n');
        }

        cout << "Введите первый элемент A: ";
        while (!(cin >> A) || cin.peek() != '\n') {
            cout << "Ошибка! Вы должны ввести число. Введите первый элемент A:  ";
            cin.clear();
            cin.ignore(123, '\n');
        }

        cout << "Введите знаменатель геометрической прогрессии D: ";
        while (!(cin >> D) || cin.peek() != '\n') {
            cout << "Ошибка! Вы должны ввести число. Введите знаменатель геометрической прогрессии D: ";
            cin.clear();
            cin.ignore(123, '\n');
        }

        vector<int> progression(N);
        progression[0] = A;

        for (int i = 1; i < N; i++) {
            progression[i] = progression[i - 1] * D;
        }

        cout << "Первые " << N << " элементов геометрической прогрессии: ";
        for (int i = 0; i < N; i++) {
            cout << progression[i] << " ";
        }
        cout << endl;
        cout << "Хотите попробовать еще? (Y/N): ";
        cin >> repeat;
    } while (repeat == 'Y');
    return 0;
}
