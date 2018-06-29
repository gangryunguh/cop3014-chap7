//
// Created by Gang-Ryung Uh on 6/25/18.
//
// This program demonstrates an array being passed to a function
// by reference
#include <iostream>
using namespace std;

void showValues(int (&)[8]); // Function prototype

int main()
{
    const int ARRAY_SIZE = 8;
    int numbers[8] = {5, 10, 15, 20, 25, 30, 35, 40};

    showValues(numbers);
    return 0;
}

//**************************************************
// Definition of function showValue.               *
// This function accepts an array of integers and  *
// the array's size as its arguments. The contents *
// of the array are displayed.                     *
//**************************************************

void showValues(int (&nums)[8])
{
    for (int index = 0; index < 8; index++)
        cout << nums[index] << " ";
    cout << endl;
}