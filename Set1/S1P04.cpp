#include <iostream>
int main()
{
    int n;
    int rev{0};

    std::cout << "Enter number: " << "\n";
    std::cin >> n;

    while (n != 0)
    {
        int remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n / 10;
    }
    std::cout << "Reversed Number is " << rev << '\n';
    return 0;
}