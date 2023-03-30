#include <iostream>
using namespace std;

/**
* Модификаторы доступа
*/

/// <summary>
/// Структура класса Point.
/// </summary>
class Point {
public:
    int x;

    void Print() {
        cout << "y: " << y << "\nx: " << x << "\nz: " << z << endl;
        PrintY();
    }

private:
    int y;
    int z;

    void PrintY() {
        cout << y << endl;
        cout << "Приватный метод PrintY" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "ru_RU");

    Point point;
    point.Print();

}
