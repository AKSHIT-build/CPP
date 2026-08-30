#include <iostream>
int main()
{
    int a = 0;
    int b = 1;
    int next = 0;
    int n;
    std::cout << "Enter number of terms " << "\n";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        next = a + b;
        std::cout << a;
        a = b;
        b = next;
    }
    return 0;
}