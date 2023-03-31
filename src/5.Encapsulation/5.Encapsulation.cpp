#include <iostream>
#include <string>
using namespace std;

/**
* Инкапсуляция.
*/

/// <summary>
/// Кофемолка.
/// </summary>
class CoffeGrinder {
private:
    /// <summary>
    /// Напряжение сети.
    /// </summary>
    /// <returns>Булевое значение. TRUE или FALSE</returns>
    bool CheckVoltage()
    {
        return true;
    }

public:
    /// <summary>
    /// Метод Start
    /// </summary>
    void Start()
    {
        if (CheckVoltage())
        {
            cout << "Кофемолка мелет кофе." << endl; // Запускаем работу кофемолки
        }
        else
        {
            cout << "Низкий уровень напряжения, кофемолка не запускается." << endl; // Кофемолка не работает
        }
        
    }
};

int main()
{
    setlocale(LC_ALL, "ru_RU");

    CoffeGrinder coffeGrinder; // Экземпляр класса кофемолка.

    coffeGrinder.Start(); // Запускаем работу скрипта.

    return 0;
}
