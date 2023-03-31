#include <iostream>
using namespace std;

/**
* Гетеры и сетеры.
* Инкапсуляция.
*/

/// <summary>
/// Структура класса Point.
/// </summary>
class Point {
private:
    // Приватные поля x и y.
    int x = NULL; // Поле x.
    int y = NULL; // Поле y.

public:

    /// <summary>
    /// Сетер для приватного поля y
    /// </summary>
    /// <param name="valueY">присвоение значения для поля y</param>
    void SetY(int valueY) {
        y = valueY;
    }

    /// <summary>
    /// Гетер для приватного поля y.
    /// </summary>
    /// <returns>y</returns>
    int GetY() {
        return y;
    }

    /// <summary>
    /// Гетер для приватного поля x.
    /// </summary>
    /// <returns>x</returns>
    int GetX() {
        return x;
    }

    /// <summary>
    /// Сетер для приватного поля x.
    /// </summary>
    /// <param name="valueX">присвоение значения для поля x</param>
    void SetX(int valueX) {
        x = valueX;
    }

    /// <summary>
    /// Метод для вывода в консоль результатов присвоения.
    /// </summary>
    void Print()
    {
        /// <summary>
        /// Если поле X не пустое, то выводим в консоль значение поля X
        /// </summary>
        if (x != NULL)
        {
            cout << "X = " << x << "\t";
        }

        /// <summary>
        /// Если поле Y не пустое, то выводим в консоль значение поля Y
        /// </summary>
        if (y != NULL)
        {
            cout << "Y = " << y << endl;
        }
    }
};

int main()
{
    setlocale(LC_ALL, "ru_RU");

    Point a;
    a.SetX(5); // Присвоение значения полю X

    a.SetY(11); // Присвоение значения полю Y

    a.Print();  // Метод вывода в консоль

    /*int result = a.GetX();

    cout << result << endl;*/

    return 0;
}
