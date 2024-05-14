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
    cout << "Введите строку:";
    getline(cin, str);
    //Найти сумму кодов символов
    int sum = 0;
    for (char c : str) {
        sum += static_cast<int>(c);
    }
    cout << "Сумма кодов символов :" << sum
        << endl;

    stringstream ss(str);//Создается объект сс, который разбирает фразу на отдельные слова
    ss >> word;//Считвается первое слово и сохраняется в переменную ворд
    bool firstWord = true;//отслеживание первого слова!!!!!!!

    while (ss >> word) {//Начало цикла,повторяется пока в сс есть слова
        if (!firstWord) {//ЧТОБЫ ДОБАВЛЯЛСЯ ПРОБЕЛ ТОЛЬКО НЕ ПЕРЕД ПЕРВЫМ СЛОВОМ
            result += "";
        }
        result += word;//бЕРЕТСЯ слово из ворд и добавляется к переменной резолт, добавляя пробел после него
        firstWord = false;
    }

    cout << "Строка без первого слова:" <<//выводится эта фраза
        result << endl;//итоговый результат на экране
    return 0;
}//слава тебюе господи, конец