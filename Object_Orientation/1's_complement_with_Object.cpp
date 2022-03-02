#include <iostream>
#include <string>

using namespace std;

class binary
{
    string num;

public:
    // Read a binary Number
    void read(void);
    // Check Binary Number
    void chk_bin(void);
    // 1's complement
    void onesComplement(void);
};
void binary::read(void)
{
    cout << "Enter a Binary Number?" << endl;
    cin >> num;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < num.length(); i++)
    {
        if (num.at(i) != '0' && num.at(i) != '1')
        {
            cout << "Not Binary !!" << endl;
            exit(0);
        }
    }
}
void binary::onesComplement(void)
{
    for (int i = 0; i < num.length(); i++)
    {
        if (num.at(i) == '0')
        {
            num.at(i) = '1';
        }
        else
        {
            num.at(i) = '0';
        }
    }
    cout << "1's Complement is " << num << endl;
}

int main()
{
    binary binary1;
    binary1.read();
    binary1.chk_bin();
    binary1.onesComplement();
}