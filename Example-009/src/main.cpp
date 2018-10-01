/**********************************************************************************************
 * Examples in the C++ language (the 'Example-009' Test).
 *
 * GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
 *
 * Created by David Canino (canino.david@gmail.com), October 2018.
 *
 * main.cpp - the C++ source file, implementing the main function for the 'Example-009' Test.
 **********************************************************************************************/

#include <iostream>
#include <cstdlib>
#include <limits>
#include "myfunctions.h"
using namespace std;

/// The main function for the <i>'Example-009'</i> Test.
int main(void)
{
    /* This is the 'Example-009' Test, which offers an elementary shell for invoking (upon request) a custom collection of functions, defined in the 'myfunctions.h' C++ header file. */
    cout << endl<<"\tThis is the \'Example-009\' Test in the C++ language." << endl;
    cout << "\t=====================================================================================================================================================" << endl << endl;
    cout.flush();
    
    /* TASK #1 - We start the main loop .. */
    while(true)
    {
        char ans=drawShell();
        runFunction(ans);
    }
    
    /* If we arrive here, then all is ok (but we will never reach here). */
    return EXIT_SUCCESS;
}
