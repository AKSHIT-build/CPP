#include <iostream>
int main()
{
    int n;
    int rev{0};
    int org;

    std::cout << "Enter number: " << "\n";
    std::cin >> n;
    org = n;

    while (n != 0)
    {
        int remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n / 10;
    }
    if (rev==org)
    {
        std::cout << "Number is Palindrome" << "\n";
    }
    else{
        std::cout<<"Number is not Palindrome"<<"\n";
    }

    return 0;
}