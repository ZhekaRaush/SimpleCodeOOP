#include <iostream>
#include <string>
using namespace std;

/**
* Что такое класс.
* Что таое объект класса.
*/

/// <summary>
/// Структура класса Human.
/// </summary>
class Human {
public:
    string name;
    string surname;
    int age;
    int weight;
};

/// <summary>
/// Структура класса Point.
/// </summary>
class Point {
public:
    int x;
    int y;
    int z;
};

int main()
{
    setlocale(LC_ALL, "ru_RU");

    cout << "\n\n";
    cout << "  ===============================================\n\n";

    Point a;
    a.x = 1;
    a.y = 3;
    a.z = 5;

    cout << "\n\n";
    cout << "  ===============================================\n\n";
    Human firstHuman;

    firstHuman.name = "Иван";
    firstHuman.surname = "Иванов";
    firstHuman.age = 30;
    firstHuman.weight = 95;

    cout << "  Имя:\t\t" << firstHuman.name << endl;
    cout << "  Фамилия:\t" << firstHuman.surname << endl;
    cout << "  Возрост:\t" << firstHuman.age << " лет\n";
    cout << "  Вес:\t\t" << firstHuman.weight << " кг\n\n";

    cout << "  ===============================================\n\n";

    Human secondHuman;

    secondHuman.name = "Петр";
    secondHuman.surname = "Иванов";
    secondHuman.age = 15;
    secondHuman.weight = 55;

    cout << "  Имя:\t\t" << secondHuman.name << endl;
    cout << "  Фамилия:\t" << secondHuman.surname << endl;
    cout << "  Возрост:\t" << secondHuman.age << " лет\n";
    cout << "  Вес:\t\t" << secondHuman.weight << " кг\n\n";

    system("pause");
    return 0;
}
