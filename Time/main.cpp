#include <iostream>
#include<locale.h>
#include "Time.h"

int main()
{
     setlocale(LC_ALL, "Russian");
    Time time(12, 32, 45);
    cout << "Время: ";
    time.ShowTime();
    cout << "--: ";
    time--;
    time.ShowTime();
    cout << "++: ";
    time++;
    time.ShowTime();
    cout << "Время - 12 секунд: ";
    time - 12;
    time.ShowTime();
    cout << "Время + 400 секунд: ";
    time + 400;
    time.ShowTime();
    cout << "Время += 50 секунд: ";
    time += 50;
    time.ShowTime();
    cout << "Перевод времени в часы: ";
    time.TranslateToHours();
    cout << "Перевод времени в минуты: ";
    time.TranslateToMinutes();
    cout << "Перевод времени в секунды: ";
    time.TranslateToSeconds();
}


