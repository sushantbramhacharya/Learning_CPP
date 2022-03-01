#include <iostream>
using std::string;

class Employee
{
    // attributes - Private by default
public:
    string Name;
    string Company;
    int Age;
    // method
    void Intro()
    {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
    // Constructor
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};
int main()
{
    // employee1 is object
    // Constructor modifying value
    Employee employee1("Sushant", "XYZ", 20);
    // employee1.Name = "Sushant";
    // employee1.Company = "XYZ";
    // employee1.Age = 20;
    employee1.Intro();

    Employee employee2("Sushant", "XYZ", 20);
    // setting Values in Object
    employee2.Name = "Kali";
    employee2.Company = "Microsoft";
    employee2.Age = 46;
    employee2.Intro();
}