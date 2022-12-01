#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include <cmath>
#include <locale.h>
#include <typeinfo>
#include <cstdlib>
using namespace std;

/*
    TR:
    Matris boyutu kullanıcıdan istenir, girilen boyutlarda bir tam sayı matrisi oluşturulur.
    Matris elemanları kullanıcıdan istenir, sonrasında matris ekrana yazdırılır.

    EN:
    Gets the size of the matrice from the user and creates one according to the input from the user.
    Gets the elements of the matrice from the user and prints the matrice on the screen.
*/
bool isInt(string number)   // Checks the input, if there's any non-digit char, returns false.
{

    for (int i = 0; i < number.length(); i++)
    {
        if (isdigit(number[i]) == false)
            return false;
    }
    return true;
}

int main()
{

    setlocale(LC_ALL, "Turkish.UTF8");
    string matriceRow;
    string matriceColumn;

    cout << "Matrisin satır sayısını giriniz : ";
    getline(cin, matriceRow);
    cout << "Matrisin sütun sayısını giriniz : ";
    getline(cin, matriceColumn);

    while ((isInt(matriceRow) && isInt(matriceColumn)) == false)
    {
        cout << "Lütfen Geçerli Değerler Giriniz!" << endl;
        cout << "Matrisin satır sayısını giriniz : ";
        getline(cin, matriceRow);
        cout << "Matrisin sütun sayısını giriniz : ";
        getline(cin, matriceColumn);
    }

    int matris[stoi(matriceRow)][stoi(matriceColumn)]{0};

    for (int i = 0; i < stoi(matriceRow); i++)
    {
        for (int j = 0; j < stoi(matriceColumn); j++)
        {
            cout << "Matrisin " << i + 1 << ". satırında " << j + 1 << ". sütunundaki sayıyı giriniz : ";
            cin >> matris[i][j];
        }
    }
    for (int p = 0; p < stoi(matriceRow); p++)
    {
        for (int k = 0; k < stoi(matriceColumn); k++)
        {
            cout << matris[p][k] << " ";
        }
        cout << endl;
    }

    return 0;
}