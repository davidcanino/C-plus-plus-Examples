/******************************************************************************************************************************
 * Examples in the C++ language (the 'Example-008' Test).
 *
 * GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
 *
 * Created by David Canino (canino.david@gmail.com), October 2018.
 *
 * myfunctions.cpp - the C++ source file, where the 'overloaded' functions, used by the 'Example-008' Test, are implemented.
 ******************************************************************************************************************************/

#include <iostream>
#include "myfunctions.h"
using namespace std;

double volume(double d)
{
	cout << "\tInvoking the \'volume(double d)\' function with \'d\' = " << d <<" ... ";
	cout.flush();
	return (d*d*d);
}

double volume(double r,double h) 
{
	cout << "\tInvoking the \'volume(double r,double h)\' function with \'r\' = " << r << " and \'h\' = " << h << " ... ";
	cout.flush();
	return (PI*r*r*h);
}

double volume(double a,double b,double c) 
{
	cout << "\tInvoking the \'volume(double a,double b,double c)\' function with \'a\' = " << a << ", \'b\' = " << b << ", and \'c\' = " << c << " ... ";
	cout.flush(); 
	return (a*b*c); 
}

/// This function simulates a pause while this test runs.
void pause(bool end)
{
    if(end)
    {
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        cin.clear();
        cout << "\t=====================================================================================================================================================" << endl << endl;
        cout << "\tPress the <RETURN> key to finish ... ";
        cout.flush();
        cin.get();
        #ifndef _MSC_VER
            cout << endl;
            cout.flush();
        #endif
    }
    else
    {
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        cout << "\tPress the <RETURN> key to continue ... ";
        cout.flush();
        cin.get();
        cout << endl << "\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
        cout.flush();
    }
}

