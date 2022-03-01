#include <iostream>
using std::string;

class Employee
{
    // attributes - Private by default
public:
    string Name;
    string Company;
    int Age;
    void Intro()
    {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
};
int main()
{
    // employee1 is object
    Employee employee1;
    // setting Values in Object
    employee1.Name = "Sushant";
    employee1.Company = "XYZ";
    employee1.Age = 20;
    employee1.Intro();

    Employee employee2;
    employee2.Name="Kali";
    employee2.Company="Microsoft";
    employee2.Age=46;
}