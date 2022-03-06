#include <iostream>

class Employee
{
    int id;
    // static variable
    static int count;

public:
    void readData()
    {
        std::cout << "Enter the id ??" << std::endl;
        std::cin >> id;
        count++;
        std::cout << "The id is " << id << std::endl;
    }
    static void printCount()
    {
        std::cout << "The Count is " << count << std::endl;
    }
};
// static variables should be refrenced outside the class
int Employee::count = 0; // it is 0 by default but value can be setted
int main()
{
    Employee employee1;
    employee1.readData();
    Employee::printCount();

    Employee employee2;
    employee2.readData();
    Employee::printCount();

    Employee employee3;
    employee3.readData();
    Employee::printCount();
    /*
    --------------------Output-----------------------
    Enter the id ??
    120
    The id is 120. And the Count is 0
    PS E:\Learning_CPP\Object_Orientation> cd "e:\Learning_CPP\Object_Orientation\" ; if ($?) { g++ static_in_oop.cpp -o static_in_oop } ; if ($?) { .\static_in_oop }
    Enter the id ??
    120
    The id is 120. And the Count is 1
    Enter the id ??
    50
    The id is 50. And the Count is 2
    Enter the id ??
    30
    The id is 30. And the Count is 3
    --------------------Output-----------------------
    --------------------Remark-----------------------
    We can see count is increasing as we make multiple objects
    and all object are using same static variable in object
    */
}