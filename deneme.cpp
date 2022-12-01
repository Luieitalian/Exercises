#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <time.h>
using namespace std;

class Human
{

private:
    string name;
    string surname;
    short int age;

protected:
    static int humanCount;

public:
    ~Human()
    {
        humanCount--;
        cout << "Destructor" << endl;
    }
    Human()
    {
        humanCount++;
        this->name = "Belirtilmemis";
        this->surname = "Belirtilmemis";
        this->age = 0;
    }
    Human(string name, string surname, short int age)
    {
        humanCount++;
        this->name = name;
        this->surname = surname;
        this->age = age;
    }
    void setName(string name)
    {

        this->name = name;
        cout << "Successfully set the name!" << endl;
    }
    string getName()
    {

        return name;
    }
    void setSurname(string surname)
    {

        this->surname = surname;
        cout << "Successfully set the surname!" << endl;
    }
    string getSurname()
    {

        return surname;
    }
    void setAge(short int age)
    {

        this->age = age;
        cout << "Successfully set the age!" << endl;
    }
    int getAge()
    {

        return age;
    }
    int gethumanCount()
    {

        return humanCount;
    }
    void showInfos()
    {

        cout << "Humanin Adi : " << this->getName() << endl;
        cout << "Humanin Soyadi : " << this->getSurname() << endl;
        cout << "Humanin Yasi : " << this->getAge() << endl;
        cout << "Human Sayisi : " << this->gethumanCount() << endl;
    }
    virtual void Ye()
    {
        cout << "Human yiyor." << endl;
    }
};

class Child : public Human
{

public:
    int salary;
    Child()
    {
        humanCount++;
        this->salary = 0;
    }
    Child(string name, string surname, int age, int salary) : Human(name, surname, age)
    {
        this->salary = salary;
        cout << "Child oluşturuldu!" << endl;
        this->showInfos();
    }
    void setSalary(double salary)
    {
        this->salary = salary;
    }
    int getSalary()
    {
        return salary;
    }
    void showInfos()
    {
        cout << "Childin Adi : " << this->getName() << endl;
        cout << "Childin Soyadi : " << this->getSurname() << endl;
        cout << "Childin Yasi : " << this->getAge() << endl;
        cout << "Childin Salary : " << this->getSalary() << endl;
    }
    void Ye()
    {
        cout << "Child yiyor." << endl;
    }
};
class Developer : Human
{

public:
    void Ye()
    {
        cout << "Developer yiyor." << endl;
    }
    Developer(string name, string surname, int age):Human(name,surname,age){
    }
};
int Human::humanCount = 0;

int main()
{
    setlocale(LC_ALL, "Turkish.UTF8");

    // Human human1 = Human("Berke", "PİTE", 18);
    Human human1("berke","pite",18);
    Human *human1_ptr = &human1;

    Child child1("burak","yıldırım",14,150);
    Child *child1_ptr = &child1;

    Developer dev1("keke","dev",15);
    Developer *dev1_ptr = &dev1;

    // human1_ptr->Ye();
    // child1_ptr->Ye();
    // dev1_ptr->Ye();

    human1.Ye();
    child1.Ye();
    dev1.Ye();

    // system("pause");

    return 0;
}