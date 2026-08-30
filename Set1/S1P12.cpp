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
    int max{0};
    int Second_max{arr[0]};

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            max = arr[0];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < max && arr[i] > Second_max)
        {
            Second_max = arr[i];
        }
    }

    std::cout << "Max Element is: " << max << "\n";
    std::cout << "Second Max Element is: " << Second_max << "\n";
    delete[] arr;
    return 0;
}