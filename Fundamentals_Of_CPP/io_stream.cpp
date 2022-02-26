#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the first number" << endl;
    // Here when we input two numbers using space or \n then it fills iostream which will
    // act as secound keyboard input
    cin >> num1;
    cout << "Enter the secound number" << endl;
    cin >> num2;
    cout << num1 + num2;
    return 0;
}