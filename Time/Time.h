#include<iostream>
#include<math.h>
#include<locale.h>
#include<string>
using namespace std;
/// <summary>
/// Класс Time
/// </summary>
class Time {
private:
    int Hours, Minutes, Seconds;
public:
    Time();
    Time(int hour, int minute, int second);
    int SetSeconds(int seconds);
    int SetMinutes(int minutes);
    int SetHours(int hours);
    bool operator<=(int seconds);
    bool operator>=(int seconds);
    bool operator<(int seconds);
    bool operator>(int seconds);
    bool operator!=(int seconds);
    bool operator==(int seconds);
    void operator=(int seconds);
    void operator+=(int seconds);
    void operator+(int seconds);
    void operator-(int seconds);
    void operator++(int);
    void operator--(int);
    int GetSeconds();
    int GetMinutes();
    int GetHours();
    void ShowTime();
    int carryover();
};
