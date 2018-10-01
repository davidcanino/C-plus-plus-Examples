/**********************************************************************************************
 * Examples in the C++ language (the 'Example-010' Test).
 *
 * GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
 *
 * Created by David Canino (canino.david@gmail.com), October 2018.
 *
 * main.cpp - the C++ source file, implementing the main function for the 'Example-010' Test.
 **********************************************************************************************/

#include "myvariadic.h"
#include <cstdlib>
#include <iostream>
using namespace std;

/// The main function for the <i>'Example-010'</i> Test.
int main(void)
{
	/* This is the 'Example-010' Test, which exploits several 'variadic' functions, defined in the 'myvariadic.h' C++ header file. */
	cout << endl<<"\tThis is the \'Example-010\' Test in the C++ language." << endl;
	cout << "\t=====================================================================================================================================================" << endl << endl;
	cout.flush();

	/* TASK #1 - invoking the 'average()' variadic function using a given sequence of 'double' floating point values. */
	double aa=average(5,10.2,5.2,2.3,-1.5,0.3);
	cout << "\tThe average \'double\' floating value is " << aa << "." << endl << endl;
	pause(false);
    
	/* TASK #2 - invoking the 'average()' variadic function using another sequence of 'double' floating point values. */
	aa=average(2,4.3,6.4);
	cout << "\tThe average \'double\' floating value is " << aa << "." << endl << endl;
	pause(false);
	
	/* TASK #3 - invoking the 'average()' variadic function using the empty sequence of 'double' floating point values. */
	aa=average(0);
	cout << "\tThe average \'double\' floating value is " << aa << "." << endl << endl;
	pause(false);
	
	/* TASK #4 - invoking the 'average()' variadic function using only one 'double' floating point value. */
	aa=average(1,4.55);
	cout << "\tThe average \'double\' floating value is " << aa << "." << endl << endl;
    	cout.flush();
	
	/* If we arrive here, then all is ok! */
	pause();
	return EXIT_SUCCESS;
}

