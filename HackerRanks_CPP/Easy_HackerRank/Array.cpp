// Print the N integers of the array in the reverse order, space-separated on a single line.
#include <iostream>

int main()
{
    int array[1000], n, mid;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
    Recheck:
        std::cin >> mid;
        if (mid >= 1 && mid <= 10000)
        {
            array[i] = mid;
        }
        else
            goto Recheck;
    }
    for (int i = n-1; i >= 0; i--)
    {
        std::cout << array[i] << " ";
    }
}