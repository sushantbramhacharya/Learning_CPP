//Greatest among 3 numebrs
#include <iostream>

int max_of_four(int a, int b, int c, int d)
{
    if(a > b && a > c && a > d)
        return a;
    else if(b > a && b > c && b > d)
        return b;
    else if(c > a && c > b && c > d)
        return c;
    else 
        return d;
}


int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d; // is the same scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    std::cout << ans; // is the same printf("%d", ans);
}