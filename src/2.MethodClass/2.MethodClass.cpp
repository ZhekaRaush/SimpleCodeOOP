#include <iostream>
#include <string>
using namespace std;

/** 
* Методы класса.
*/

/// <summary>
/// Класс человек.
/// Создайте новый класса по шаблону.
/// Например: Human Vasiliy.
/// </summary>
class Human {
public:
    string name; // Поле Имя.
    string surname; // Поле Фамилия
    int age; // Поле Возрост.
    int weight; // Поле Вес.

    /// <summary>
    /// Метод вывода экземпляр класса Human в консоль.
    /// </summary>
    void Print() {
        if (name != "")
        {
            cout << "Имя: " << name << endl;
        }
        else
        {
            return;
        }

        if (surname != "")
        {
            cout << "Фамилия: " << surname << endl;
        }
        else
        {
            return;
        }

        if (age != NULL)
        {
            cout << "Возрост: " << age << endl;
        }
        else
        {
            return;
        }

        if (weight != NULL)
        {
            cout << "Вес: " << weight << endl << endl;
        }
        else
        {
            return;
        }
    }
};

int main()
{
    setlocale(LC_ALL, "ru-RU");

    /// <summary>
    /// Экземпляр класса Human.
    /// </summary>
    /// <returns></returns>
    Human ivanHuman;

    ivanHuman.name = "Иван"; // Имя.
    ivanHuman.surname = "Иванов"; // Фамилия.
    ivanHuman.age = 30; // Возрост.
    ivanHuman.weight = 95; // Вес.
    ivanHuman.Print(); // Вывод содержимого в консоль.

    /// <summary>
    /// Экземпляр класса NoName.
    /// </summary>
    /// <returns></returns>
    Human NoName;

    NoName.name = "Без имени";

    NoName.Print(); // Выводит в консоль баги

    return 0;
}
