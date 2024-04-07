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
        cout << "������� ���������� ��������� N: ";
        while (!(cin >> N) || cin.peek() != '\n') {
            cout << "������! �� ������ ������ �����. ������� ���������� ��������� N: ";
            cin.clear();
            cin.ignore(123, '\n');
        }

        cout << "������� ������ ������� A: ";
        while (!(cin >> A) || cin.peek() != '\n') {
            cout << "������! �� ������ ������ �����. ������� ������ ������� A:  ";
            cin.clear();
            cin.ignore(123, '\n');
        }

        cout << "������� ����������� �������������� ���������� D: ";
        while (!(cin >> D) || cin.peek() != '\n') {
            cout << "������! �� ������ ������ �����. ������� ����������� �������������� ���������� D: ";
            cin.clear();
            cin.ignore(123, '\n');
        }

        vector<int> progression(N);
        progression[0] = A;

        for (int i = 1; i < N; i++) {
            progression[i] = progression[i - 1] * D;
        }

        cout << "������ " << N << " ��������� �������������� ����������: ";
        for (int i = 0; i < N; i++) {
            cout << progression[i] << " ";
        }
        cout << endl;
        cout << "������ ����������� ���? (Y/N): ";
        cin >> repeat;
    } while (repeat == 'Y');
    return 0;
}
