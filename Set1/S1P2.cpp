#include <iostream>
int main()
{
    int n;
    int flag{0};
    std::cout << "Enter number: " << "\n";
    std::cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            flag=1;
            break;
        }

    }
    if (flag > 0)
    {
        std::cout << "Not Prime Number" << "\n";
    }
    else
    {

        std::cout << "Prime Number" << "\n";
    }
    return 0;
}