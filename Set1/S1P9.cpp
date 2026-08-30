#include <iostream>
int main()
{
    int n;
    std::cout << "Enter Size of array" << "\n";
    std::cin >> n;
    int *arr = new int[n];
    std::cout << "Enter Elements" << "\n";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    int min{0};

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            min = arr[0];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    std::cout << "Min Element is: " << min << "\n";
    delete[] arr;
    arr=nullptr;
    return 0;
}