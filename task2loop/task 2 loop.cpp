// task 2 loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <cmath>


int main()
{
    int a = 0;
    int b = 0;
    int numberOfPrime = 0;
    cin >> a >> b;
    int i = 0;
    if (a <= b) {
        i = a;
    }
    else if (a > b) {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
        i = a;
    }  
   
   
    
    do {
        bool isPrime = true;
        unsigned sqrtOfN = (unsigned)(sqrt(i)+0.5);

        if (i <= 1)
        {
            isPrime = false;
        }
        for (size_t divisorCandidate = 2; divisorCandidate <= sqrtOfN; divisorCandidate++)
        {
            if (i % divisorCandidate == 0)
            {
                isPrime = false;
                break;
            }
        }
        cout << isPrime * i << endl;
        i = i++;
    } while (i == b);
    





}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
