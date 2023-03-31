#include <iostream>
#include <string>
using namespace std;

/**
* Конструктор.
*/

/// <summary>
/// Необходимо установить значение X и Y для экземпляра класса.
/// </summary>
class Point
{
public:
	/// <summary>
	/// Конструктор.
	/// </summary>
	/// <param name="valueX">Целочисленное значение параметра X</param>
	/// <param name="valueY">Целочисленное значение параметра Y</param>
	Point(int valueX, int valueY)
	{
		x = valueX; // Параметр X
		y = valueY; // Параметр Y
	}

    /// <summary>
    /// Метод для вывода в консоль.
    /// </summary>
    void Print()
    {
        cout << "X = " << x << "\t" << "Y = " << y << endl << endl;
    }

private:
	int x;
	int y;
};

int main()
{
    setlocale(LC_ALL, "ru_RU");

	Point point(7, 12);
    point.Print();

	Point pointB(77, 46);
	pointB.Print();

    return 0;
}
