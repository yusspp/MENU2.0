#include <iostream>
#include <fstream>
#include <string>
#include "PROGRESSION.h"
#include "SPYU.h"
#include "MATRIX.h"

using namespace std;

void openFile(string filename) {

	ifstream file(filename);

	if (file.is_open()) {
		string content;
		while (getline(file, content)) {
			cout << content << endl;
		}
		file.close();
	}
	else {
		cout << "Невозможно открыть файл " << endl;
	}
}

int main() {

	setlocale(LC_ALL, "RU");
	int choice;
	do {
		cout << "Меню:" << endl;
		cout << "1. Вычисление sin, cos, tg по углу в радианах" << endl;
		cout << "2. Вычисление прогрессии" << endl;
		cout << "3. Сформировать матрицу, у которой  в каждой строке содержатся числа из исходного набора" << endl;
		cout << "4. Выход" << endl;

		cout << "Выберите действие (1-4): ";
		cin >> choice;

		switch (choice) {
		case 1:
			SPYU();
			break;
		case 2:
			PROGRESSION();
			break;
		case 3:
			MATRIX();
			break;
		case 4:
			cout << "Выход из программы." << endl;
			break;
		default:
			cout << "Неверный выбор. Попробуйте снова." << endl;
		}
	} while (choice != 3);
	return 0;
}