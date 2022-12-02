#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <time.h>
#include "CarClass.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish.UTF8");
    Car car1;
    car1.showInfos();

    Car car2(231.2,1984,5);
    car2.showInfos();
    return 0;
}