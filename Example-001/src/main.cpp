/**********************************************************************************************
 * Examples in the C++ language (the 'Example-001' Test).
 *
 * GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
 *
 * Created by David Canino (canino.david@gmail.com), September 2018.
 *
 * main.cpp - the source file, implementing the main function for the 'Example-001' Test.
 **********************************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

/// The main function for the <i>'Example-001'</i> Test.
int main(void)
{
    /* This is the 'Example-001' Test, near to be the classic 'Hello World!" example! */
    cout<<endl<<"\tThis is the 'Example-001' Test in the C++ language."<<endl;
    cout<<"\t====================================================="<<endl<<endl;
    cout<<"\tHello World!"<<endl<<endl;
    cout<<"\t====================================================="<<endl<<endl;
    cout << "\tPress the <RETURN> key to finish ... ";
    cout.flush();
    cin.get();
    #ifndef _MSC_VER
        cout << endl;
        cout.flush();
    #endif
    return EXIT_SUCCESS;
}
