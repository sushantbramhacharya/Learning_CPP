#include <iostream>
using std::string;

class Employee
{
private:
    string Name;
    string Company;
    int Age;

public:
    // Setter Method
    void setName(string name)
    {
        Name = name;
    }
    // Getter Method
    string getName()
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        if (age >= 18)
            Age = age;
        else
            Age = 0;
    }
    int getAge()
    {
        return Age;
    }
};
int main()
{
    Employee employee1;
    employee1.setName("Kali");
    employee1.setCompany("Microsoft");
    employee1.setAge(39);

    std::cout << employee1.getName() << " is " << employee1.getAge() << " years old and works at " << employee1.getCompany() << "." << std::endl;

    Employee employee2;
    employee2.setName("Sushant");
    employee2.setCompany("XYZ");
    employee2.setAge(17);

    std::cout << employee2.getName() << " is " << employee2.getAge() << " years old and works at " << employee2.getCompany() << "." << std::endl;
}