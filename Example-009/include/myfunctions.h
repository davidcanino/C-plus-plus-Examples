/******************************************************************************************************************************
 * Examples in the C++ language (the 'Example-009' Test).
 *
 * GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
 *
 * Created by David Canino (canino.david@gmail.com), September 2018.
 *
 * myfunctions.h - the C++ header file, where the custom functions, used by the 'Example-009' Test, are defined.
 ******************************************************************************************************************************/

/* Optional inclusion! */
#ifndef MY_FUNCTIONS_H

    #define MY_FUNCTIONS_H

    /// This function draws a primitive shell, and allows to recall several functions, that can be selected and run by the user.
    /**
     * This function returns the 'char' representation for the index of the location in the 'funcs' array, storing the pointer to the function to be run. This index will be the argument of the 'runFunction()' function.
     */
    char drawShell();

    /// This function executes and runs a function, selected by the user.
    /**
     * The function to be run is given by the 'char' representation for the index of the location in the 'funcs' array, storing its pointer. This 'char' representation is obtained by the 'drawShell()' function.
     */
    void runFunction(char ans);

    /// A custom collection of functions, that can be selected and run by the user.
    /**
     * This collection is an array of function pointers. If the function pointer, contained in a location, is not the 'nullptr' pointer, then it points to a valid function. Otherwise, it marks the sequence end.
     */
    extern void (*funcs[])();

    /// This function retrieves the number of valid functions, that can be selected and run by the user.
    /**
     * Here, this function returns the number of valid locations in the 'funcs' array (externally provided), i.e., the number of locations not storing the 'nullptr' pointer.
     */
    int functionsNumber();

    /// This function simulates a pause while this test runs.
    void pause(bool end = true);

#endif
