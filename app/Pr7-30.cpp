// This program demonstrates the vector clear member function.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> values(100);

   cout << "The values vector has "
        << values.size() << " elements.\n";
   cout << "I will call the clear member function...\n";

   // Clear the vector values and determine whether the size of vector is 0



   return 0;
}