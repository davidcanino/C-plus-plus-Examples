/**********************************************************************************************
 * Examples in the C++ language (the 'Example-005' Test).
 *
 * GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
 *
 * Created by David Canino (canino.david@gmail.com), September 2018.
 *
 * main.cpp - the C++ source file, implementing the main function for the 'Example-005' Test.
 **********************************************************************************************/

#include <cstdlib>
#include <iostream>
#include "myfunc.h"
using namespace std;

/// The main function for the <i>'Example-005'</i> Test.
int main(void)
{
    /* This is the 'Example-005' Test, which exploits the 'myfunc()' function. This latter is defined in the 'myfunc.h' C++ header file. */
    cout << endl<<"\tThis is the \'Example-005\' Test in the C++ language." << endl;
    cout << "\t=================================================================================" << endl << endl;
    cout.flush();
    myfunc();

    /* If we arrive here, then all is ok! */
    cout << "\t=================================================================================" << endl << endl;
    cout << "\tPress the <RETURN> key to finish ... ";
    cout.flush();
    cin.get();
    #ifndef _MSC_VER
        cout << endl;
        cout.flush();
    #endif
    return EXIT_SUCCESS;
}

