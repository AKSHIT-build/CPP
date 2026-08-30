#include <iostream>
int main(){
     int n;
    std::cout << "Enter size of array" << "\n";
    std::cin >> n;
    int *arr = new int[n];
    std::cout<<"Enter Elements"<<"\n";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    int left=0;
    int right=n-1;
    int target;
    std::cout<<"Enter ELement to be searched"<<"\n";
    std::cin>>target;
    for ( int i = 0; i < n; i++)
    {
        int middle=(left+right)/2;
        if (target==arr[middle])
        {
            std::cout<<"Target Found"<<"\n";
            break; 
        }
        if (target>arr[middle])
        {
            left=middle+1;
        }
        if (target<arr[middle])
        {
            right=middle-1;
        }
        
    }
    return 0;
    
}