/**********************************************************************************************
 * Examples in the C++ language (the 'Example-202' Test).
 *
 * GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
 *
 * Created by David Canino (canino.david@gmail.com), January 2019.
 *
 * main.cpp - the C++ source file, implementing the main function for the 'Example-202' Test.
 **********************************************************************************************/

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

/* First, we define the A class (source base class). */
class A
{
    public:
    
    // First constructor (no argument).
    A() { cout << "\t\t-) invoking the \'A()\' constructor" << endl; }
    
    // Second constructor (a string argument).
    A(string s) { cout << "\t\t-) invoking the \'A(string)\' constructor" << endl; }
    
    // Third copy constructor.
    A(A &a) { cout << "\t\t-) invoking the \'A(A&)\' copy constructor" << endl; }
};

/* Then, we defined the B class (derived from the A class). */
class B : public A
{
    public:
    
    // First constructor (no argument).
    B() { cout << "\t\t-) invoking the \'B()\' constructor" << endl; }
    
    // Second constructor (a string argument).
    B(string s) { cout << "\t\t-) invoking the \'B(string)\' constructor" << endl; }
};

/// The main function for the <i>'Example-202'</i> Test.
int main(void)
{
    /* This is the 'Example-202' Test, which shows in what sequence the constructors of inherited classes are invoked! */
    cout << endl << "\tThis is the \'Example-202\' Test in the C++ language." << endl;
    cout <<"\t===========================================================================================================" << endl <<endl;
    
    /* First allocation (an instance of the A class with a 'string' argument). */
    cout << "\tCreating a new instance of the A (base) class with a \'string\' argument:" << endl << endl;
    A a2("Test");
    cout << endl << flush;
    
    /* Second allocation (an instance of the B class with a 'string' argument). */
    cout << "\tCreating a new instance of the B (derived) class with a \'string\' argument:" << endl << endl;
    B b1("Alan");
    cout << endl << flush;
    
    /* Third allocation (a copy of the B class). */
    cout << "\tCreating a new instance of the B (derived) class from an existing one without the ad-hoc constructor:" << endl << endl;
    B b2(b1);
    cout << endl << flush;
    
    /* The game ends here! */
    cout <<"\t===========================================================================================================" << endl <<endl;
    cout << "\tPress the <RETURN> key to finish ... ";
    cout.flush();
    cin.get();
    #ifndef _MSC_VER
        cout << endl;
        cout.flush();
    #endif
    return EXIT_SUCCESS;
}
