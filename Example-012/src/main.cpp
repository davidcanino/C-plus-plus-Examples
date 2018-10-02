/**********************************************************************************************
 * Examples in the C++ language (the 'Example-012' Test).
 *
 * GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
 *
 * Created by David Canino (canino.david@gmail.com), October 2018.
 *
 * main.cpp - the C++ source file, implementing the main function for the 'Example-012' Test.
 **********************************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

/// The main function for the <i>'Example-012'</i> Test.
int main(void)
{
    /* This is the 'Example-012' Test, where the ASCII table is generated and validated. */
    cout << endl<<"\tThis is the \'Example-012\' Test in the C++ language." << endl;
    cout << "\t=====================================================================================================================" << endl << endl;
    cout.flush();
    
    /* TASK #1 - generating the 8-bit ASCII table by considering all 'int' values in [0,127] and their corresponding characters! */
    for(int num=0;num<128;num++)
    {
        /* Now, we convert the 'integer' value 'num' (i.e., a C++ 'int' value) as the corresponding character (i.e., a C++ 'char' value). */
        char temp=(char)num;
        cout << "\t-) The " << num <<" integer value corresponds to the \'" << temp << "\' character." << endl;
        cout.flush();
    }
    
    /* If we arrive here, then all is ok! */
    cout << endl << "\t=====================================================================================================================" << endl << endl;
    cout << "\tPress the <RETURN> key to finish ... ";
    cout.flush();
    cin.get();
    #ifndef _MSC_VER
        cout << endl;
        cout.flush();
    #endif
    return EXIT_SUCCESS;
}
