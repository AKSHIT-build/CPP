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
    int flag = 0;
    int size = 0;
    int *u_arr = new int[n];
    for (int i = 0; i < n; i++)
    {   flag=0;
        int num = arr[i];
        for (int j = 0; j < size; j++)
        {
            if (num == u_arr[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            u_arr[size] = arr[i];
            size++;
        }
    }
    std::cout<<"Unique Array"<<"\n";
    for (int i = 0; i < size; i++)
    {
        std::cout << u_arr[i] << "\n";
    }
    delete[] arr;
    delete[] u_arr;

    return 0;
}