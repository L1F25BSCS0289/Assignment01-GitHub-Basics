/*
 * Program    : Sum of First 50 Natural Numbers
 * Name       : Zain ul abidin
 * Reg No     : L1F25BSCS0289
Assignment: Programming Fundamentals - Assignment 1
Formula: Sum = n * (n + 1) / 2
For n = 50: Sum = 50 * 51 / 2 = 1275
 */
#include <iostream> 
using namespace std;
int main(){ 
  int sum = 0;
    for (int i = 1; i <= 50; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of first 50 natural numbers : " << sum;
    return 0;
}
