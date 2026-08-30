#include <iostream>
int main(){
    int n;
    std::cout<<"Enter Size of array"<<"\n";
    std::cin>>n;
    int*arr=new int[n];
    std::cout<<"Enter Elements"<<"\n";
    for (int i = 0; i < n; i++)
    {
        std::cin>>arr[i];
    }
    int max{0};

    for (int i = 0; i < n; i++)
    {
        if (i==0)
        {
            max=arr[0];
        }
        if (arr[i]>max)
        {
            max=arr[i];
        }

    }
    std::cout<<"Max Element is: "<<max<<"\n";
    delete[] arr;
    arr=nullptr;
    return 0;
}