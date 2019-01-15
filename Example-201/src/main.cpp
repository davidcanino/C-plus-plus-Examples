/**********************************************************************************************
 * Examples in the C++ language (the 'Example-201' Test).
 *
 * GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
 *
 * Created by David Canino (canino.david@gmail.com), January 2019.
 *
 * main.cpp - the C++ source file, implementing the main function for the 'Example-201' Test.
 **********************************************************************************************/

/* NOTE: the 'Example-201' Test cannot be compiled due to the wrong definition of the 'Case3_struct' type! */

#include <iostream>
#include <cstdlib>
using namespace std;

/* CASE #1 - this 'struct' definition is correct! */
struct Case1_struct
{
	int x;
	long int li;
};

/* CASE #2 - this 'struct' definition is still correct! */
struct Case2_struct
{
	float f;
	struct Case2_struct *s;
};

/* CASE #3 - this 'struct' definition is not correct! */
struct Case3_struct
{
	float f;
	struct Case3_struct s;
}; 

/// The main function for the <i>'Example-201'</i> Test.
int main(void)
{
	/* This is the 'Example-201' Test, which shows how declaring correctly a 'struct'. */
	cout << endl << "\tThis is the \'Example-201\' Test in the C++ language." << endl;
	cout <<"\t==============================================================" << endl <<endl;

	struct Case1_struct s1;
	struct Case2_struct s2;
	struct Case3_struct s3;
    
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
