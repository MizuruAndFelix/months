#include <iostream>
#include <locale.h>
using namespace std;

enum mouths
{
    Январь = 1,
    Февраль,
    Март,
    Апрель,
    Май,
    Июнь,
    Июль,
    Август,
    Сентябрь,
    Октябрь,
    Ноябрь,
    Декабрь
};

int main()
{
    setlocale(LC_ALL, "Russian");

    int number = 1;
    while (number != 0)
    {
        cout << "Введите номер месяца: ";
        cin >> number;
        if (number > 12 || number < 0)
        {
            cout << "\nНЕПРАВИЛЬНЫЙ НОМЕР МЕСЯЦА!\n\n";
            continue;
        }
        else
        {
            switch (number)
            {

            case Январь:
                cout << "Январь\n";
                break;
            case Февраль:
                cout << "Февраль\n";
                break;
            case Март:
                cout << "Март\n";
                break;
            case Апрель:
                cout << "Апрель\n";
                break;
            case Май:
                cout << "Май\n";
                break;
            case Июнь:
                cout << "Июнь\n";
                break;
            case Июль:
                cout << "Июль\n";
                break;
            case Август:
                cout << "Август\n";
                break;
            case Сентябрь:
                cout << "Сентябрь\n";
                break;
            case Октябрь:
                cout << "Октябрь\n";
                break;
            case Ноябрь:
                cout << "Ноябрь\n";
                break;
            case Декабрь:
                cout << "Декабрь\n";
                break;
            }
        }
    }
    cout << "До свидания!";
}
 