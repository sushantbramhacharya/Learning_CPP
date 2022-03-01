#include<iostream>
using std::string;

class Employee{
    //attributes - Private by default
public:
    string Name;
    string Company;
    int Age;
};
int main()
{
    //employee1 is object
    Employee employee1;
    //setting Values in Object
    employee1.Name="Sushant";
    employee1.Company="XYZ";
    employee1.Age=20;
}