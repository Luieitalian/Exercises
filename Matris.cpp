#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include <cmath>
#include <clocale>
#include <typeinfo>
using namespace std;

int main (){
    setlocale(LC_ALL , "Turkish");
    int getMatrisSatirSayisi;
    int getMatrisSütunSayisi;

    cout << "Matrisin satır sayısını giriniz : ";
    cin >> getMatrisSatirSayisi;
    cout << "Matrisin sütun sayısını giriniz : ";
    cin >> getMatrisSütunSayisi;

    int matris[getMatrisSatirSayisi][getMatrisSütunSayisi];
    
    for (int i = 0; i < getMatrisSatirSayisi; i++)
    {
        for (int j = 0; j < getMatrisSütunSayisi; j++)
        {
            cout << "Matrisin " << i + 1 << ". satırında " << j + 1 << ". sütunundaki sayıyı giriniz : ";
            cin >> matris[i][j];
        }
    }
    for (int p = 0; p < getMatrisSatirSayisi; p++)
    {
        for (int k = 0; k < getMatrisSütunSayisi; k++)
        {
            cout << matris[p][k] << " ";
        }
        cout << endl;
    }
    


    return 0;
}