#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int SPYU() {
	setlocale(LC_ALL, "RU");

	char repeat;
	do {
		cout << "Введите угол(в радианах): ";

		string RadPr;
		cin >> RadPr;

		if (RadPr.find(",") != string::npos) {
			cerr << "Ошибка! Введите число, использу точку." << endl;
			return 1;
		}

		double Radians = stod(RadPr);

		if (!Radians) {
			cerr << "Ошибка! Введено не число." << endl;
			return 1;
		}

		double sinus = sin(Radians);
		double cosinus = cos(Radians);
		double tangens = tan(Radians);

		cout << "Синус введенного угла: " << sinus << endl;
		cout << "Косинус введенного угла: " << cosinus << endl;
		cout << "Тангенс введенного угла: " << tangens << endl;
		cout << "Хотите ввести еще одно число? (Y/N): ";
		cin >> repeat;
	} while (repeat == 'Y');
	return 0;
}
