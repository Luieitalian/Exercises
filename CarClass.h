#ifndef __CAR_CLASS__
#define __CAR_CLASS__
#include <string>
using namespace std;

enum colors
{
    Yellow,
    Red,
    Blue,
    Purple,
    White,
    Orange,
    Black,
    NavyBlue,
    Green
};

class Car
{
private:
    double maxSpeed;
    int year;
    int numberofGears;

public:
    string brand;
    string model;
    colors color;

    void Accelerate();
    void Brake();
    void ShiftUp();
    void ShiftDown();
    void HoldDownClutch();
    void ReleaseClutch();
    void showInfos();
    Car();
    Car(double,int,int);
    ~Car();
};

#endif