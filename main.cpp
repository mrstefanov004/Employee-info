#include <iostream>
#include <windows.h>

using namespace std;
class Person
{
public:
    int Age;
    string Name;


};


class Employee:public Person{
    string Company;

public:
    void present_yourself(){
        cout<< "HI, my name is " << Name <<", my company is " << Company << ". I'm " << Age << "years old.";
    }

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};


int main()
{
    system("color 0a");
    Employee worker = Employee("Mike", "Microsoft", 27);
    worker.present_yourself();
    return 0;
}
