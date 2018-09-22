/**********************************************************************************************************************************************
 * Examples in the C++ language (the 'Example-007' Test).
 *
 * GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
 *
 * Created by David Canino (canino.david@gmail.com), September 2018.
 *
 * recursive_factorial.cpp - the C++ source file, where the 'factorial()' recursive function, used by the 'Example-007' Test, is implemented.
 **********************************************************************************************************************************************/

#include "recursive_factorial.h"
#include <iostream>
using namespace std;

unsigned long factorial(unsigned long n)
{
    /* We exploit the recursion! */
    cout << "\tComputing factorial(" << n << ") = ";
    if( (n==0) || (n==1) )
    {
        /* Base cases for the recursion! */
        cout << "1." << endl;
        cout.flush();
        return 1;
    }
    else
    {
        /* The recursive step! */
        cout << n << " * factorial(" << (n-1) << ");" << endl;
        cout.flush();
        return (n*factorial(n-1));
    }
}
