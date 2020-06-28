/* ВБД021, Зуева Светлана Павловна

Задача 8.
Пользователь вводит две границы диапазона. Посчитать сумму всех чисел
диапазона.

*/

#include <iostream>
using namespace std;
'fdkgpsfdijg;oifdjg
int main()
{
    setlocale(0, "");
    int nachalo, konec, sum = 0;
    cout << "Вести начало диапозона чисел: " << endl;
    cin >> nachalo;
    cout << "Вести конец диапозона чисел:" << endl;
    cin >> konec;
    
    if (nachalo < konec)
    {
        int count = nachalo;
        while (count <= konec)
        {
            sum += count;
            ++count;
        }
    } 
    else 
    {
        int count = konec;
        while (count <= nachalo)
        {
            sum += count;
            ++count;
        }
    }
    cout << "\n";
    cout << "Cумма всех чисел диапозона = " << sum << endl;
    return 0;
}
