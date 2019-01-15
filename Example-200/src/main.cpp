/**********************************************************************************************
 * Examples in the C++ language (the 'Example-200' Test).
 *
 * GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
 *
 * Created by David Canino (canino.david@gmail.com), January 2019.
 *
 * main.cpp - the C++ source file, implementing the main function for the 'Example-200' Test.
 **********************************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

/// This is a very simple function.
int fun(int x) { return 2*x; }

/// The main function for the <i>'Example-200'</i> Test.
int main(void)
{
	int i0,i1,i5,i;

	/* This is the 'Example-200' Test, which validates functions and the bitwise and operator (&)! */
	cout << endl << "\tThis is the \'Example-200\' Test in the C++ language." << endl;
	cout <<"\t==============================================================" << endl <<endl;
	
    /* First attempt: fun(0) & fun(1) */
    cout << "\tThe return value \'i0 = fun(0)\' is ";
	i0 = fun(0);
	cout << i0 << "."  << endl;
	cout << "\tThe return value \'i1 = fun(1)\' is ";
	i1 = fun(1);
	cout << i1 << "."  << endl;
	cout<< "\tThus, the bitwise and operator \'i = i0 & i1\' returns ";
	i = i0 & i1;
	cout << i <<"." << endl << flush;
    cout<< "\tThus, the bitwise and operator \'i = i1 & i0\' returns ";
    i = i1 & i0;
    cout << i <<"." << endl << endl << flush;
    
    /* Second attempt: fun(1) & fun(1) */
    cout << "\tThe return value \'i1 = fun(1)\' is ";
    i1 = fun(1);
    cout << i1 << "."  << endl;
    cout<< "\tThus, the bitwise and operator \'i = i1 & i1\' returns ";
    i = i1 & i1;
    cout << i <<"." << endl << endl << flush; 
    
    /* Third attempt: fun(1) & fun(2) */
    cout << "\tThe return value \'i1 = fun(1)\' is ";
    i1 = fun(1);
    cout << i1 << "."  << endl;
    cout << "\tThe return value \'i5 = fun(5)\' is ";
    i5 = fun(5);
    cout << i5 << "."  << endl;
    cout<< "\tThus, the bitwise and operator \'i = i1 & i5\' returns ";
    i = i1 & i5;
    cout << i <<"." << endl << flush;
    cout<< "\tThus, the bitwise and operator \'i = i5 & i1\' returns ";
    i = i5 & i1;
    cout << i <<"." << endl << endl << flush;
    
    /* The game ends here! */
	cout <<"\t==============================================================" << endl <<endl;
	cout << "\tPress the <RETURN> key to finish ... ";
	cout.flush();
	cin.get();
	#ifndef _MSC_VER
		cout << endl;
		cout.flush();
	#endif
	return EXIT_SUCCESS;
}
