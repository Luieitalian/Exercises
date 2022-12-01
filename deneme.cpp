#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <time.h>
using namespace std;

class Ogrenci{

	private:
		string name;
		string surname;
		short int age;
	public:
		static int ogrCount;
		~Ogrenci(){
			ogrCount--;
			cout << "Destructor"<<endl;
		}
		Ogrenci(){
			ogrCount++;
			this->name = "Belirtilmemis";
			this->surname = "Belirtilmemis";
			this->age = 0; 
		}
		Ogrenci(string name, string surname, short int age){
			ogrCount++;
			this->name = name;
			this->surname = surname;
			this->age = age;
		}
		void setName(string name){

			this->name = name;
			cout << "Successfully set the name!"<<endl;
		}
		string getName(){

			return name;
		}
		void setSurname(string surname){

			this->surname = surname;
			cout << "Successfully set the surname!"<<endl;
		}
		string getSurname(){

			return surname;
		}
		void setAge(short int age){
			
			this->age = age;
			cout << "Successfully set the age!"<<endl;
		}
		int getAge(){

			return age;
		}
};

int Ogrenci::ogrCount = 0;

int main(){
	setlocale(LC_ALL,"Turkish");

	Ogrenci* ogr = new Ogrenci();

	/*cout << "Ogrencinin adini giriniz: "; string ad; cin >>ad;ogr->setName(ad);
	cout << "Ogrencinin soyadini giriniz: "; string soyad; cin >>soyad;ogr->setSurname(soyad);
	cout << "Ogrencinin yasini giriniz: "; short int yas; cin >>yas;ogr->setAge(yas);*/
	
	ogr->setName("berke");
	ogr->setSurname("pite");
	ogr->setAge(18);

	cout << "Ogrencinin Adi : " << ogr->getName() << endl;
	cout << "Ogrencinin Soyadi : " << ogr->getSurname() << endl;
	cout << "Ogrencinin Yasi : " << ogr->getAge() << endl;
	cout << "Ogrenci Sayisi : "<< Ogrenci::ogrCount << endl;
	
	system("pause");

	return 0;
}