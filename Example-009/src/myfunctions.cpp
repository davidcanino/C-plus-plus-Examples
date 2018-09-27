/******************************************************************************************************************************
 * Examples in the C++ language (the 'Example-009' Test).
 *
 * GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
 *
 * Created by David Canino (canino.david@gmail.com), September 2018.
 *
 * myfunctions.cpp - the C++ source file, where the custom functions, used by the 'Example-009' Test, are implemented.
 ******************************************************************************************************************************/

#include <iostream>
#include <limits>
#include <cstdlib>
#include <string>
#include "myfunctions.h"
using namespace std;

/* Several functions, that can be selected and run by the user. */
inline void fa() { cout << "\tRunning and executing the \'fa()\' function ... "; }
inline void fb() { cout << "\tRunning and executing the \'fb()\' function ... "; }
inline void fc() { cout << "\tRunning and executing the \'fc()\' function ... "; }
inline void fd() { cout << "\tRunning and executing the \'fd()\' function ... "; }
inline void fe() { cout << "\tRunning and executing the \'fe()\' function ... "; }

/* A custom collection of functions, that can be selected and run by the user. */
void (*funcs[])() = { fa, fb, fc, fd, fe, nullptr };

int functionsNumber()
{
    int fl=0;

    /* We retrieve the number of valid function pointers in the 'funcs' array, i.e., the locations not storing the 'nullptr' pointer. Here, the first 'nullptr' pointer is the sequence end. */
    while(funcs[fl] != nullptr ) fl++;
    return fl;
}

/// This function simulates a pause while this test runs.
void pause(bool end)
{
    if(end)
    {
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        cin.clear();
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
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        cout << "\tPress the <RETURN> key to continue ... ";
        cout.flush();
        cin.get();
        cout << endl << "\t-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
        cout.flush();
    }
}

char drawShell()
{
    char ans;
    
    /* Now, we draw the shell, and select which function has to be run. */
    cout << "\tChoosing which function has to be run:" << endl << endl;
    cout << "\t1) \t invoking the 'fa()' function;" << endl;
    cout << "\t2) \t invoking the 'fb()' function;" << endl;
    cout << "\t3) \t invoking the 'fc()' function;" << endl;
    cout << "\t4) \t invoking the 'fd()' function;" << endl;
    cout << "\t5) \t invoking the 'fe()' function;" << endl;
    cout << "\tQ) \t exit from the program;" << endl;
    cout << "\tq) \t exit from the program." << endl << endl;
    cout << "\t>> ";
    cout.flush();
    cin>>ans;
    return ans;
}

void runFunction(char ans)
{
    /* If the choice is 'q' or 'Q', then the program ends here! */
    if ((ans == (int)'q') || (ans == (int)'Q'))
    {
        cout << endl << "\tThis program is ending correctly ... " << endl << endl;
        pause(true);
        exit(EXIT_SUCCESS);
    }
    
    /* If we arrive here, then we must exclude the null number. */
    if (ans == '0')
    {
        cout << endl << "\tPLEASE, YOU MUST INSERT A VALID CHOICE!" << endl << endl << "\tTHIS PROGRAM IS CLOSING ... " << endl << endl;
        pause(true);
        exit(EXIT_FAILURE);
    }
    
    /* If we arrive here, then we must have a not null number.  */
    int fl = functionsNumber();
    string s = string() + ans;
    int i = atoi(s.c_str());
    if ((i < 1) || (i > fl))
    {
        cout << endl << "\tPLEASE, YOU MUST INSERT A VALID CHOICE!" << endl << endl << "\tTHIS PROGRAM IS CLOSING ... " << endl << endl;
        pause(true);
        exit(EXIT_FAILURE);
    }
    
    /* If we arrive here, then we execute the function, such that its pointer is in the 'i' location! */
    cout << endl;
    funcs[i-1]();
    cout << "ok" << endl << endl;
    pause(false);
}
