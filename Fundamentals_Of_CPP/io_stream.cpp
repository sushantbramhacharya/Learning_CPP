#include <iostream>
int main()
{
    int num1, num2;
    std::cout << "Enter the first number" << std::endl;
    // Here when we input two numbers using space or \n then it fills iostream which will
    // act as secound keyboard input
    std::cin >> num1;
    std::cout << "Enter the secound number" << std::endl;
    std::cin >> num2;
    std::cout << num1 + num2;
}