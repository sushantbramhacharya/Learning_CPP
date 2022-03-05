#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    char c,d;
    int a_size,b_size;
    cin>>a>>b;
    a_size=a.size();
    b_size=b.size();
    cout<<a_size<<" "<<b_size<<endl;
    cout<<a+b<<endl;
    c=a[0];
    d=b[0];
    a[0]=d;
    b[0]=c;
    cout<<a<<" "<<b;
    return 0;
}
