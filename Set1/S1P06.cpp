#include <iostream>
int main(){
   int n;
   int remainder{0};
   int sum{0};
   std::cout << "Enter number: " << "\n";
   std::cin >> n;

   while (n!=0)
   {
    remainder=n%10;
    sum=sum+remainder;
    n=n/10;
   }
   std::cout << "Sum : " <<sum<< "\n";
   return 0;
}