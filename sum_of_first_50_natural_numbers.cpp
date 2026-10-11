/*
 * Program    : Sum of First 50 Natural Numbers
 * Name       : Zain ul abidin
 * Reg No     : L1F25BSCS0289
 * Assignment : 01 - Getting Started with GitHub
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
