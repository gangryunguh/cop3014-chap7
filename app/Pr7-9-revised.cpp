//
// Created by Gang-Ryung Uh on 6/20/18.
//
#include <iostream>
using namespace std;

int main()
{
    int values1[] = { 10, 20, 30, 40};
    int values2[4];  // An array of 4 integers
    int count;       // Loop counter variable

    // Print the initialized 4-element int array values1[]
    cout << "Print the values1[] array\n";
    for (count = 0; count < 4; count++)
        cout << values1[count] << endl;

    // Attempt to store 6 numbers in the 4-element int
    // arrays values2[]
    cout << "\nI will store 6 numbers in a 4 element array!\n";
    for (count = 0; count < 6; count++)
        values2[count] = -count;

    // Print the initialized 4-element int array values1[]
    cout << "\nPrint the values1[] array\n";
    for (count = 0; count < 4; count++)
        cout << values1[count] << endl;

    cout << "\nPrint the values2[] array\n";
    for (count = 0; count < 4; count++)
        cout << values2[count] << endl;

    return 0;
}
