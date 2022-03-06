#include <iostream>
int main()
{
    int scores[] = {100, 90, 80};
    for (auto score : scores) // auto is used so it automatically determine data type or can use datatype
    {
        std::cout << score << std::endl;
        // values are score
    }
    for (auto item : {50, 60, 30}) // iterate with the array
    {
        std::cout << item << std::endl;
        // values are item
    }
    for (auto letter : "Sushant") // iterate through string and gives letter
    {
        std::cout << letter << std::endl;
        // characters are letter
    }
}