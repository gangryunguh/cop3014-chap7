// This program demonstrates the range-based for loop with a vector.
#include <iostream>
#include <vector>
 using namespace std;

int main() 
{
   // Define a vector.
   vector<int> numbers(5);

   // Get values for the vector elements.
   //   - set the integer values read from the keyboard to each
   //     vector element using range-based for loop with
   //     the type specification int &




   // Display the vector elements.
   cout << "Here are the values that you entered:\n";
   for (int val : numbers)
      cout << val << endl;

   return 0;
}