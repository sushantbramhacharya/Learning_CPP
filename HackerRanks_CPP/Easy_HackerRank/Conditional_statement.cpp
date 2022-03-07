#include <bits/stdc++.h>

std::string ltrim(const std::string &);
std::string rtrim(const std::string &);



int main()
{
    std::string n_temp;
    std::getline(std::cin, n_temp);

    int n = std::stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    if(n<=9)
    {
        if(n==1)
        {
            std::cout<<"one";
        }
        else if(n==2)
        {
            std::cout<<"two";
        }else if(n==3)
        {
            std::cout<<"three";
        }else if(n==4)
        {
            std::cout<<"four";
        }else if(n==5)
        {
            std::cout<<"five";
        }else if(n==6)
        {
            std::cout<<"six";
        }else if(n==7)
        {
            std::cout<<"seven";
        }else if(n==8)
        {
            std::cout<<"eight";
        }else
        {
            std::cout<<"nine";
        }
    }
    else
        std::cout<<"Greater than 9";
    return 0;
}

std::string ltrim(const std::string &str) {
    std::string s(str);

    s.erase(
        s.begin(),
        std::find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(isspace)))
    );

    return s;
}

std::string rtrim(const std::string &str) {
    std::string s(str);

    s.erase(
        std::find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
