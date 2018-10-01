/**********************************************************************************************
 * Examples in the C++ language (the 'Example-008' Test).
 *
 * GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
 *
 * Created by David Canino (canino.david@gmail.com), October 2018.
 *
 * main.cpp - the C++ source file, implementing the main function for the 'Example-008' Test.
 **********************************************************************************************/

#include <cstdlib>
#include <limits>
#include <iostream>
#include "myfunctions.h"
using namespace std;

/// The main function for the <i>'Example-008'</i> Test.
int main(void)
{
    double d, r, h, vc;
    
    /* This is the 'Example-008' Test, which exploits several 'overloaded' functions, defined in the 'myfunctions.h' C++ header file. */
    cout << endl<<"\tThis is the \'Example-008\' Test in the C++ language." << endl;
    cout << "\t=====================================================================================================================================================" << endl << endl;
    cout.flush();
    
    /* TASK #1 - compute the volume for a cube. Clearly, the user must provide the 'd' length of its side. */
    cout << "\tPlease, insert the \'d\' length (a positive and not null value) for being the side of a cube: ";
    cin >> d;
    if ((!cin) || (d <= 0))
    {
        cout << endl << "\tPLEASE, YOU MUST ENTER THE VALID \'d\' LENGTH (A POSITIVE AND NOT NULL VALUE) FOR BEING THE SIDE OF A CUBE!" << endl << endl;
        cout << "\tTHIS PROGRAM IS CLOSING ... " << endl << endl;
        cin.clear();
        cin.clear();
        pause();
        return EXIT_FAILURE;
    }
    
    /* If we arrive here, then all is ok for computing the volume of a cube! Here, we invoke the 'volume(double d)' function. */
    cout << "\tYou inserted the valid \'d\' = " << d << " length for being the side of a cube." << endl;
    vc = volume(d);
    cout << "ok" <<endl;
    cout << "\tThe volume for the cube of interest is " << vc << "." << endl << endl;
    cout.flush();
    pause(false);
    
    /* TASK #2 - compute the volume for a cylinder. Clearly, the user must provide the 'r' length for the radius of its circular basis and the 'h' length for its height! */
    cout << "\tPlease, insert the \'r\' length (a positive and not null value) for being the radius of the circular basis in a cylinder: ";
    cin >> r;
    if ((!cin) || (r <= 0))
    {
        cout << endl << "\tPLEASE, YOU MUST ENTER THE VALID \'r\' LENGTH (A POSITIVE AND NOT NULL VALUE) FOR BEING THE RADIUS OF THE CIRCULAR BASIS IN A CYLINDER!" << endl << endl;
        cout << "\tTHIS PROGRAM IS CLOSING ... " << endl << endl;
        cin.clear();
        cin.clear();
        pause();
        return EXIT_FAILURE;
    }
    
    /* If we arrive here, then the user entered a correct value for the 'r' radius. Now, the user must insert a correct value for the 'h' height of a cylinder. */
    cout << "\tYou inserted the valid \'r\' = " << r << " length for being the radius of the circular basis in a cylinder." << endl;
    cout << "\tPlease, insert the \'h\' length (a positive and not null value) for being the height of a cylinder: ";
    cin >> h;
    if ((!cin) || (h <= 0))
    {
        cout << endl << "\tPLEASE, YOU MUST ENTER THE VALID \'h\' LENGTH (A POSITIVE AND NOT NULL VALUE) FOR BEING THE HEIGHT OF A CYLINDER!" << endl << endl;
        cout << "\tTHIS PROGRAM IS CLOSING ... " << endl << endl;
        cin.clear();
        cin.clear();
        pause();
        return EXIT_FAILURE;
    }
    
    /* If we arrive here, then all is ok for computing the volume of a cylinder! Here, we invoke the 'volume(double r, double h)' function. */
    cout << "\tYou inserted the valid \'h\' = " << h << " length for being the height of a cylinder." << endl;
    vc = volume(r, h);
    cout<< "ok" <<endl;
    cout << "\tThe volume for the cylinder of interest is " << vc << "." << endl << endl;
    cout.flush();
    pause(false);
    
    /* TASK #3 - compute the volume of a cuboid. Clearly, the user must provide the 'a' - 'b' - 'c' lengths for its sides! */
    cout << "\tPlease, insert the \'a\' length (a positive and not null value) for being the width of a cuboid: ";
    cin >> d;
    if ((!cin) || (d <= 0))
    {
        cout << endl << "\tPLEASE, YOU MUST ENTER THE VALID \'a\' LENGTH (A POSITIVE AND NOT NULL VALUE) FOR BEING THE WIDTH OF A CUBOID!" << endl << endl;
        cout << "\tTHIS PROGRAM IS CLOSING ... " << endl << endl;
        cin.clear();
        cin.clear();
        pause();
        return EXIT_FAILURE;
    }
    
    /* If we arrive here, then the user entered a correct value for the 'a' width. Now, the user must insert a correct value for the 'b' depth of a cuboid. */
    cout << "\tYou inserted the valid \'a\' = " << d << " length for being the width of a cuboid." << endl;
    cout << "\tPlease, insert the \'b\' length (a positive and not null value) for being the depth of a cuboid: ";
    cin >> r;
    if ((!cin) || (r <= 0))
    {
        cout << endl << "\tPLEASE, YOU MUST ENTER THE VALID \'b\' LENGTH (A POSITIVE AND NOT NULL VALUE) FOR BEING THE DEPTH OF A CUBOID!" << endl << endl;
        cout << "\tTHIS PROGRAM IS CLOSING ... " << endl << endl;
        cin.clear();
        cin.clear();
        pause();
        return EXIT_FAILURE;
    }
    
    /* If we arrive here, then the user entered a correct value for the 'b' depth. Now, the user must insert a correct value for the 'c' height of a cuboid. */
    cout << "\tYou inserted the valid \'b\' = " << r << " length for being the depth of a cuboid." << endl;
    cout << "\tPlease, insert the \'c\' length (a positive and not null value) for being the height of a cuboid: ";
    cin >> h;
    if( (!cin) || (h<=0) )
    {
        cout << endl << "\tPLEASE, YOU MUST ENTER THE VALID \'c\' LENGTH (A POSITIVE AND NOT NULL VALUE) FOR BEING THE HEIGHT OF A CUBOID!" << endl << endl;
        cout << "\tTHIS PROGRAM IS CLOSING ... " << endl << endl;
        cin.clear();
        cin.clear();
        pause();
        return EXIT_FAILURE;
    }
    
    /* If we arrive here, then all is ok for computing the volume of a cuboid! Here, we invoke the 'volume(double a, double b, double c)' function. */
    cout << "\tYou inserted the valid \'c\' = " << h << " length for being the height of a cuboid." << endl;
    vc=volume(d,r,h);
    cout<< "ok" <<endl;
    cout << "\tThe volume for the cuboid of interest is " << vc << "." << endl << endl;
    cout.flush();
    
    /* If we arrive here, then all is ok! */
    pause();
    return EXIT_SUCCESS;
}
