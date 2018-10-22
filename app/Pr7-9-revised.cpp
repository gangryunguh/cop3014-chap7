//
// Created by Gang-Ryung Uh to highlight the problem of stack overflow.
//
#include <iostream>
using namespace std;

int main()
{
    int values1[] = { 10, 20, 30, 40};
    int values2[4];
    int count;

    for (count = 0; count < 6; count++)
        values2[count] = -count;

    for (count = 0; count < 4; count++)
        cout << values1[count] << " ";
    cout << endl;

    for (count = 0; count < 4; count++)
        cout << values2[count] << " ";
    cout << endl;
    return 0;
}
