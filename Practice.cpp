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

    int a = 2;
    auto mk = typeid(a).name();
    cout << typeid(mk).name();
    //cout << "Matrisin satır sayısını giriniz : ";
    //cin >> getMatrisSatirSayisi;

    //cout << "Matrisin sütun sayısını giriniz : ";
    //cin >> getMatrisSütunSayisi;



    //int matris[getMatrisSatirSayisi][getMatrisSütunSayisi];
    



    return 0;
}