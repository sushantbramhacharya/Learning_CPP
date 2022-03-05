#include <iostream>
using namespace std;
int main()
{
    int scores[] = {100, 90, 80};
    for (auto score : scores) // auto is used so it automatically determine data type or can use datatype
    {
        cout << score << endl;
        // values are score
    }
    for (auto item : {50, 60, 30}) // iterate with the array
    {
        cout << item << endl;
        // values are item
    }
    for (auto letter : "Sushant") // iterate through string and gives letter
    {
        cout << letter << endl;
        // characters are letter
    }
    return 0;    
}