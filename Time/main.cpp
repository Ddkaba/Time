#include <iostream>
#include<locale.h>
#include "Time.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    Time time(12, 32, 45);
    cout << "�����: ";
    time.ShowTime();
    cout << "--: ";
    time--;
    time.ShowTime();
    cout << "++: ";
    time++;
    time.ShowTime();
    cout << "����� - 12 ������: ";
    time - 12;
    time.ShowTime();
    cout << "����� + 400 ������: ";
    time + 400;
    time.ShowTime();
    cout << "����� += 50 ������: ";
    time += 50;
    time.ShowTime();
    cout << "������� ������� � ����: ";
    time.TranslateToHours();
    cout << "������� ������� � ������: ";
    time.TranslateToMinutes();
    cout << "������� ������� � �������: ";
    time.TranslateToSeconds();
}


