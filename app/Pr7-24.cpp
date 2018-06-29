// This program stores, in two vectors, the hours worked by 5
// employees, and their hourly pay rates.
#include <iostream>
#include <iomanip>
#include <vector>       // Needed to define vectors
using namespace std;

int main()
{
   const int NUM_EMPLOYEES = 5;           // Number of employees
   vector<int> hours(NUM_EMPLOYEES);      // A vector of integers
   vector<double> payRate(NUM_EMPLOYEES); // A vector of doubles
   int index;                             // Loop counter

   // Input the data.
   cout << "Enter the hours worked by " << NUM_EMPLOYEES;
   cout << " employees and their hourly rates.\n";
   hours.resize(10);
   payRate.resize(10);
   for (index = 0; index < NUM_EMPLOYEES+5; index++)
   {
      cout << "Hours worked by employee #" << (index + 1);
      cout << ": ";
      cin >> hours[index];
      cout << "Hourly pay rate for employee #";
      cout << (index + 1) << ": ";
      cin >> payRate[index];
   }

   vector<int> hours2;      // A vector of integers
   hours2 = hours;

   //cout << hours.at(11);
   // Display each employee's gross pay.
   cout << "\nHere is the gross pay for each employee:\n";
   cout << fixed << showpoint << setprecision(2);
   for (index = 0; index < NUM_EMPLOYEES+5; index++)
   {
      double grossPay = hours2[index] * payRate[index];
      cout << "Employee #" << (index + 1);
      cout << ": $" << grossPay << endl;
   }
   return 0;
}