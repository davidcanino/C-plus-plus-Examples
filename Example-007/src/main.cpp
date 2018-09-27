/**********************************************************************************************
 * Examples in the C++ language (the 'Example-007' Test).
 *
 * GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
 *
 * Created by David Canino (canino.david@gmail.com), September 2018.
 *
 * main.cpp - the C++ source file, implementing the main function for the 'Example-007' Test.
 **********************************************************************************************/

#include "recursive_factorial.h"
#include <iostream>
#include <cstdlib>
using namespace std;

/// This function simulates a pause while this test runs.
void pause()
{
    cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    cin.clear();
    cout << "\t==============================================================================================" << endl << endl;
    cout << "\tPress the <RETURN> key to finish ... ";
    cout.flush();
    cin.get();
    #ifndef _MSC_VER
        cout << endl;
        cout.flush();
    #endif
}

/// The main function for the <i>'Example-007'</i> Test.
int main(void)
{
    long int n;

    /* This is the 'Example-007' Test, which exploits the 'factorial()' function. This latter is defined in the 'recursive_factorial.h' header file. */
    cout << endl<<"\tThis is the \'Example-007\' Test in the C++ language." << endl;
    cout << "\t==============================================================================================" << endl << endl;
    cout.flush();
    
    /* TASK #1 - we ask for a positive or null value to be saved in the 'n' variable. */
    cout << "\tPlease, insert the positive or null \'n\' integer value: ";
    cin >> n;
    if( (!cin) || (n<0) )
    {
        cin.clear();
        cin.clear();
        cout << endl <<"\tPLEASE, YOU MUST ENTER THE POSITIVE OR NULL \'n\' INTEGER VALUE!" << endl << endl << "\tTHIS PROGRAM IS CLOSING ... " << endl << endl;
        pause();
        return EXIT_FAILURE;
    }
    
    /* TASK #2 - we can invoke the 'factorial()' function on the 'n' variable. */
    unsigned long nn=(unsigned long)n;
    cout<< "\tYou inserted the positive or null \'n\'=" << nn << " integer value." << endl << endl;
    unsigned long ris = factorial(nn);
    cout << endl << "\tThe factorial n! = " << n <<"! = " << ris << "." << endl << endl;
    cout.flush();
    
    /* If we arrive here, then all is ok! */
    pause();
    return EXIT_SUCCESS;
}
