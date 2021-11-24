#include <iostream>
#include "Time.h"

int main()
{
    Time time(12, 32, 45);
    time--;
    time.ShowTime();
    time++;
    time.ShowTime();
    time - 12;
    time.ShowTime();
    time + 400;
    time.ShowTime();
}

