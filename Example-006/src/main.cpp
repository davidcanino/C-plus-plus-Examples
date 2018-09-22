/**********************************************************************************************
 * Examples in the C++ language (the 'Example-006' Test).
 *
 * GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
 *
 * Created by David Canino (canino.david@gmail.com), September 2018.
 *
 * main.cpp - the source file, implementing the main function for the 'Example-006' Test.
 **********************************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

/// The main function for the <i>'Example-006'</i> Test.
int main(void)
{
    /* This is the 'Example-006' Test, where the 'goto' statement is validated while navigating among the labels. */
    cout << endl<<"\tThis is the 'Example-006' Test in the C++ language." << endl;
    cout << "\t================================================================================================================================================" << endl << endl;
    cout.flush();
    
    /* TASK #1 - navigating among all labels by using the 'goto' statement. Here, the navigation order is given by the 'step1' - 'step'2 - 'final_step' labels, even if they are not in this order within the source file. */
    cout << "\tStarting the navigation among all labels of interest in the 'Example-006' Test." << endl << endl;
    cout << "\tHere, the navigation order is given by the 'step1' - 'step'2 - 'final_step' labels, even if they are not in this order within the source file." << endl  <<endl;
    cout << "\tJumping to the 'step1' label ... ";
    cout.flush();
    goto step1;
    
    /* TASK #3 - here, there's the 'step2' label. */
    step2:
     
        cout<<"ok"<<endl;
        cout<<"\tReached (correctly) the statements, related to the 'step2' label." << endl << endl;
        cout<<"\tJumping to the 'final_step' label ... ";
        cout.flush();
        goto final_step;
    
    /* TASK #2 - here, there's the 'step1' label. */
    step1:

        cout << "ok" << endl;
        cout << "\tReached (correctly) the statements, related to the 'step1' label." << endl << endl;
        cout << "\tJumping to the 'step2' label ... ";
        cout.flush();
        goto step2;
    
    /* TASK #4 - here, there's the 'final_step' label. */
    final_step:
    
        cout << "ok" << endl;
        cout << "\tReached (correctly) the statements, related to the 'final_step' label."<<endl<<endl;
        cout << "\tFinished (correctly) the navigation among all labels of interest in the 'Example-006' Test." << endl << endl;
        cout.flush();
    
    /* If we arrive here, then all is ok! */
    cout << "\t================================================================================================================================================" << endl << endl;
    cout << "\tPress the <RETURN> key to finish ... ";
    cout.flush();
    cin.get();
    #ifndef _MSC_VER
        cout << endl;
        cout.flush();
    #endif
    return EXIT_SUCCESS;
}

