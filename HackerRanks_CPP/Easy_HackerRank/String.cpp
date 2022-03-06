#include <iostream>
#include <string>

int main() {
	// Complete the program
    std::string a, b;
    char c, d;
    int a_size, b_size;
    std::cin >> a >> b;
    a_size = a.size();
    b_size = b.size();
    std::cout << a_size << " " << b_size << std::endl;
    std::cout << a + b << std::endl;
    c = a[0];
    d = b[0];
    a[0] = d;
    b[0] = c;
    std::cout << a << " " << b;
}
