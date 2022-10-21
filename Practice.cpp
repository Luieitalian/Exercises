#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include <cmath>
#include <clocale>
using namespace std;

int main (){
    setlocale(LC_ALL , "Turkish");
    
    double array[4];
    int getArraySize = sizeof(array) / sizeof(double);
    double sum;

    for (int i = 0; i < getArraySize; i++)
    {
        cin >> array[i];
        sum += array[i];
    }
    
    cout << sum;

    return 0;
}