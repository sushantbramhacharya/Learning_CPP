#include <cmath> // c++ header file, you can use math.h, is the same
#include <iostream> // std::cin

void update(int *a,int *b) {
    int c= *a - *b;
    *a = *a + *b;
    *b = abs(c);
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    std::cin >> a >> b; // is the same scanf("%d %d", &a, &b);
    update(pa, pb);
    std::cout << a << "\n" << b; //is the same printf("%d\n%d", a, b);
}