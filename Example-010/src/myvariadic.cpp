/***********************************************************************************************************************************************************************
 * Examples in the C++ language (the 'Example-010' Test).
 *
 * GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
 *
 * Created by David Canino (canino.david@gmail.com), October 2018.
 *
 * myvariadic.cpp - the C++ source file, where the 'variadic' functions, used by the 'Example-010' Test, are implemented.
 ***********************************************************************************************************************************************************************/

#include <iostream>
#include <cstdarg>
#include <cstdio>
#include "myvariadic.h"
using namespace std;

void pause(bool end)
{
	if(end)
	{
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
		cout << "\tPress the <RETURN> key to continue ... ";
		cout.flush();
		cin.get();
		cout << endl << "\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
		cout.flush();
	}
}

double average(unsigned int count,...)
{
	va_list vl;
	double tot=0.0;

	/* Now, we extract everything from the variadic list of arguments! */
	cout << "\tInvoking the \'average()\' variadic function with ";
	if(count==0) cout << "no argument!" << endl << endl;
	else if(count==1) cout << "only one argument: " << endl <<endl;
	else cout << "the following " << count << " arguments: " << endl << endl;
	va_start(vl,count);
	for(unsigned int i=0;i<count;i++)
	{
		double p;

		/* Now, we extract the argument #i! */
		p=va_arg(vl,double);
		cout << "\t\t-) the argument \x23" << i << " is " << p;
		if(i<count-1)  cout << ";" << endl;
		else cout << "." << endl;
		cout.flush();
		tot+=p;
	}

	/* If we arrive here, then all is ok! */
	va_end(vl);
	if(count!=0) { cout << endl; cout.flush(); }
	return (tot/count);
}

