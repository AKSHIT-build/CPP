#include <iostream>
int main(){
    int n;
    std::cout << "Enter Size of array" << "\n";
    std::cin >> n;
    int *arr = new int[n];
    std::cout << "Enter Elements" << "\n";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    int element{};
    int count{0};
    std::cout << "Enter Element to be searched" << "\n";
    std::cin >> element;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==element)
        {
            count++;
        }
        
    }
    std::cout<<element<<" appears "<<count<<" times "<<"\n";
    delete[] arr;
    arr=nullptr;
    return 0;
    
}