#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    // Complete this function
    vector<int> vct;
    int temp;
    char ch_temp;
    stringstream ss(str);
    while (ss >> temp)
    {
        ss >> ch_temp;
        vct.push_back(temp);
    }

    return vct;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}
