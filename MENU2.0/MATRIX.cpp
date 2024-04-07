#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int MATRIX() {
    setlocale(LC_ALL, "RU");
    char repeat;
    do {
        int M, N;
        cout << "¬ведите количество строк M: ";
        while (!(std::cin >> M)) {
            cout << "ќшибка! ¬ведено не число. ¬ведите количество строк M: ";
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        cout << "¬ведите количество чисел в наборе N: ";
        while (!(std::cin >> N)) {
            cout << "ќшибка! ¬ведено не число. ¬ведите количество чисел в наборе N: ";
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        }

        vector<int> numbers(N);
        cout << "¬ведите набор из N чисел: ";
        for (int i = 0; i < N; i++) {
            while (!(cin >> numbers[i])) {
                cout << "ќшибка! ¬ведено не число. ¬ведите число дл€ элемента " << i + 1 << ": ";
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

        cout << "—формированна€ матрица:" << endl;
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << std::endl;
        }

        cout << "’отите попробовать еще? (Y/N): ";
        cin >> repeat;
        while (repeat != 'Y' && repeat != 'N') {
            cout << "ѕожалуйста, введите Y или N: ";
            cin >> repeat;
        }
    } while (repeat == 'Y');

    return 0;
}