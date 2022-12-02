#include "CarClass.h"
#include <iostream>

Car::Car(){
    maxSpeed=0.0;
    year=0;
    numberofGears=0;
}

Car::Car(double maxSpeed,int year,int numberofGears){
    this->maxSpeed = maxSpeed;
    this->year = year;
    this->numberofGears = numberofGears;
}

Car::~Car(){
    cout << "Destructed"<<endl;
}

void Car::showInfos(){
    cout << this->maxSpeed<<endl;
    cout << this->year<<endl;
    cout << this->numberofGears<<endl;
}

void Car::Accelerate(){
    std::cout << "It accelerates";
}
