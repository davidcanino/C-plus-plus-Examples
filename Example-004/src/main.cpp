/**********************************************************************************************
 * Examples in the C++ language (the 'Example-004' Test).
 *
 * GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
 *
 * Created by David Canino (canino.david@gmail.com), September 2018.
 *
 * main.cpp - the source file, implementing the main function for the 'Example-004' Test.
 **********************************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

/// The main function for the <i>'Example-004'</i> Test.
int main(void)
{
    /* This is the 'Example-004' Test, where several C++11 constructs are validated. */
    cout << endl<<"\tThis is the 'Example-004' Test in the C++ language." << endl;
    cout << "\t=================================================================================" << endl << endl;
    cout.flush();

    /* TASK #1 - performing the C++1 initialization and the automatic traversal of the 'a' array. */
    int a[]={-4,5,-44,-5,33,12,55},n=0;
    cout << "\tPerformed the automatic C++11 initialization of the 'a' array." << endl;
    cout << "\tPerforming the automatic C++11 traversal of all 'int' values in the 'a' array:" << endl << endl;
    for(auto i : a)
    {
        cout << "\t\t-) extracted the 'int' value " << i;
        if(n<6) cout << ";" << endl;
        else cout << "." << endl << endl;
        cout.flush();
        n=n+1;
    }
    
    /* If we arrive here, then all is ok! */
    cout <<"\t=================================================================================" << endl << endl;
    cout << "\tPress the <RETURN> key to finish ... ";
    cout.flush();
    cin.get();
    #ifndef _MSC_VER
        cout << endl;
        cout.flush();
    #endif
    return EXIT_SUCCESS;
}
