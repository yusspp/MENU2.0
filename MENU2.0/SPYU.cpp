#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int SPYU() {
	setlocale(LC_ALL, "RU");

	char repeat;
	do {
		cout << "������� ����(� ��������): ";

		string RadPr;
		cin >> RadPr;

		if (RadPr.find(",") != string::npos) {
			cerr << "������! ������� �����, �������� �����." << endl;
			return 1;
		}

		double Radians = stod(RadPr);

		if (!Radians) {
			cerr << "������! ������� �� �����." << endl;
			return 1;
		}

		double sinus = sin(Radians);
		double cosinus = cos(Radians);
		double tangens = tan(Radians);

		cout << "����� ���������� ����: " << sinus << endl;
		cout << "������� ���������� ����: " << cosinus << endl;
		cout << "������� ���������� ����: " << tangens << endl;
		cout << "������ ������ ��� ���� �����? (Y/N): ";
		cin >> repeat;
	} while (repeat == 'Y');
	return 0;
}
