#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> vct;
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        vct.push_back(temp);
    }
    sort(vct.begin(), vct.end());
    for (int i = 0; i < vct.size(); i++)
    {
        cout << vct[i] << " ";
    }
    return 0;
}
