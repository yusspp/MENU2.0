#include <iostream>
#include <sstream>
#include <windows.h>
#include <string>


using namespace std;

int DELETE(){
    setlocale(LC_ALL, "RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string str, word, result;
    cout << "������� ������:";
    getline(cin, str);
    //����� ����� ����� ��������
    int sum = 0;
    for (char c : str) {
        sum += static_cast<int>(c);
    }
    cout << "����� ����� �������� :" << sum
        << endl;

    stringstream ss(str);//��������� ������ ��, ������� ��������� ����� �� ��������� �����
    ss >> word;//���������� ������ ����� � ����������� � ���������� ����
    bool firstWord = true;//������������ ������� �����!!!!!!!

    while (ss >> word) {//������ �����,����������� ���� � �� ���� �����
        if (!firstWord) {//����� ���������� ������ ������ �� ����� ������ ������
            result += "";
        }
        result += word;//������� ����� �� ���� � ����������� � ���������� ������, �������� ������ ����� ����
        firstWord = false;
    }

    cout << "������ ��� ������� �����:" <<//��������� ��� �����
        result << endl;//�������� ��������� �� ������
    return 0;
}//����� ����� �������, �����