#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int MATRIX() {
    setlocale(LC_ALL, "RU");
    char repeat;
    do {
        int M, N;
        cout << "������� ���������� ����� M: ";
        while (!(std::cin >> M)) {
            cout << "������! ������� �� �����. ������� ���������� ����� M: ";
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        cout << "������� ���������� ����� � ������ N: ";
        while (!(std::cin >> N)) {
            cout << "������! ������� �� �����. ������� ���������� ����� � ������ N: ";
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        }

        vector<int> numbers(N);
        cout << "������� ����� �� N �����: ";
        for (int i = 0; i < N; i++) {
            while (!(cin >> numbers[i])) {
                cout << "������! ������� �� �����. ������� ����� ��� �������� " << i + 1 << ": ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }

        vector<vector<int>> matrix(M, vector<int>(N));
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                matrix[i][j] = numbers[j];
            }
        }

        cout << "�������������� �������:" << endl;
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << std::endl;
        }

        cout << "������ ����������� ���? (Y/N): ";
        cin >> repeat;
        while (repeat != 'Y' && repeat != 'N') {
            cout << "����������, ������� Y ��� N: ";
            cin >> repeat;
        }
    } while (repeat == 'Y');

    return 0;
}