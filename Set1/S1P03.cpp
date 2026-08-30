#include <iostream>

int main(){
    int n;
    int fact{1};
    std::cout << "Enter number: " << "\n";
    std::cin >> n;

    if (n<0)
    {
        std::cout<<"Negative Factorial D.N.E"<<"\n";
    }
    else if (n==0 || n==1)
    {
        std::cout<<"Factorial: "<<fact<<"\n";
    }
    else{
        for (int i = 1; i < n+1; i++)
        {
            fact*=i;
        }

    std::cout<<"Factorial: "<<fact<<"\n";
    }
    return 0;

}