#include <iostream>
int main()
{
    int n;
    std::cout << "Enter size of array" << "\n";
    std::cin >> n;
    int *arr = new int[n];
    std::cout<<"Enter Elements"<<"\n";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    std::cout<<"Reversed Array"<<"\n";
    for (int i = 0; i < n; i++)
    {
      if (i < n / 2)
        {
            int temp = arr[i];
            arr[i] = arr[n - 1 - i];
            arr[n - 1 - i] = temp;
        }

        std::cout << arr[i] << "\n";
    }
    delete[] arr;

    return 0;
}