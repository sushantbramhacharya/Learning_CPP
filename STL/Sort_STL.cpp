#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int array[]={6,2,6,4,1,7,3,0};
    sort(array,array+8);
    for(int num:array)
    {
        cout<<num<<endl;
    }
}