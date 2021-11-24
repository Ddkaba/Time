#include<iostream>
#include<math.h>
#include<locale.h>
#include"Time.h"
using namespace std;
/// <summary>
/// Значения по умолчанию
/// </summary>
Time::Time() {
    Hours = 0;
    Minutes = 0;
    Seconds = 0;
}
/// <summary>
/// Конструктор класса
/// </summary>
/// <param name="hour"></param>
/// <param name="minute"></param>
/// <param name="second"></param>
Time::Time(int hour, int minute, int second) { 
    Hours = hour;
    Minutes = minute;
    Seconds = second;
}
/// <summary>
/// Перегрузка <=
/// </summary>
/// <param name="s"></param>
/// <returns>Возврат bool переменной</returns>
bool Time::operator<=(int s) 
{
    return Seconds <= s;
} 
/// <summary>
/// Перегрузка >=
/// </summary>
/// <param name="s"></param>
/// <returns>Возврат bool переменной</returns>
bool Time::operator>=(int s)
{
    return Seconds >= s;
}
/// <summary>
/// Перегрузка <
/// </summary>
/// <param name="s"></param>
/// <returns>Возврат bool переменной</returns>
bool Time::operator<(int s)
{
    return Seconds < s;
}
/// <summary>
/// Перегрузка >
/// </summary>
/// <param name="s"></param>
/// <returns>Возврат bool переменной</returns>
bool Time::operator>(int s)
{
    return Seconds > s;
}
/// <summary>
/// Перегрузка ==
/// </summary>
/// <param name="s"></param>
/// <returns>Возврат bool переменной</returns>
bool Time::operator==(int s)
{
    return Seconds == s;
}
/// <summary>
/// Перегрузка !=
/// </summary>
/// <param name="s"></param>
/// <returns>Возврат bool переменной</returns>
bool Time::operator!=(int s)
{
    return Seconds != s;
}
/// <summary>
/// Перегрузка =
/// </summary>
/// <param name="s"></param>
void Time::operator=(int s)
{
    Seconds = s;
    carryover();
}
/// <summary>
/// Перегрузка +=
/// </summary>
/// <param name="s"></param>
void Time::operator+=(int s)
{
    Seconds += s;
    carryover();
}
/// <summary>
/// Перегрузка +
/// </summary>
/// <param name="s"></param>
void Time::operator +(int s)
{
    Seconds = Seconds + s;
    carryover();
}
/// <summary>
/// Перегрузка ++
/// </summary>
/// <param name="s"></param>
void Time::operator++(int)
{
    Seconds++;
    carryover();
}
/// <summary>
/// Перегрузка -
/// </summary>
/// <param name="s"></param>
void Time::operator-(int s)
{
    Seconds = Seconds - s;
    carryover();
}
/// <summary>
/// Перегрузка --
/// </summary>
/// <param name="s"></param>
void Time::operator--(int)
{
    Seconds--;
    carryover();
}
/// <summary>
/// Геттер переменной Seconds
/// </summary>
/// <returns></returns>
int Time::GetSeconds() {
    return Seconds;
}
/// <summary>
/// Геттер переменной Minutes
/// </summary>
/// <returns></returns>
int Time::GetMinutes() {
    return Minutes;
}
/// <summary>
/// Геттер переменной Hours
/// </summary>
/// <returns></returns>
int Time::GetHours() {
    return Hours;
}
/// <summary>
/// Сеттер переменной Seconds
/// </summary>
/// <param name="second"></param>
/// <returns></returns>
int Time::SetSeconds(int second) {
    Seconds = second;
    carryover();
    return Seconds;
}
/// <summary>
/// Сеттер переменной Minutes
/// </summary>
/// <param name="minutes"></param>
/// <returns></returns>
int Time::SetMinutes(int minutes) {
    Minutes = minutes;
    carryover();
    return Minutes;
}
/// <summary>
/// Сеттер переменной Hours
/// </summary>
/// <param name="minutes"></param>
/// <returns></returns>
int Time::SetHours(int hours) {
    Hours = hours;
    carryover();
    return Hours;
}
/// <summary>
/// Перевод времени
/// </summary>
/// <returns>Переведенно правильно время</returns>
int Time::carryover() {
    while (Minutes >= 60)
    {
        Minutes -= 60;
        Hours++;
    }
    while (Seconds >= 60)
    {
        Seconds -= 60;
        Minutes++;
    }
    return Seconds, Minutes, Hours;
}
/// <summary>
/// Вывод значений класса
/// </summary>
void Time::ShowTime()
{
    cout << Hours << " : " << Minutes << " : " << Seconds << endl;
}