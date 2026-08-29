#include <iostream>
int main()
{
    int a, b, c;
    std::cout << "Enter three numbers: " << "\n";
    std::cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        std::cout << "Largest No.: " << a << "\n";
    }
    else if (b >= a && b >= c)
    {
        std::cout << "Largest No.: " << b << "\n";
    }
    else
    {

        std::cout << "Largest No.: " << c << "\n";
    }
    return 0;
}