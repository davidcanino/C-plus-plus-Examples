/******************************************************************************************************************************
 * Examples in the C++ language (the 'Example-008' Test).
 *
 * GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
 *
 * Created by David Canino (canino.david@gmail.com), September 2018.
 *
 * myfunctions.h - the C++ header file, where the 'overloaded' functions, used by the 'Example-008' Test, are defined.
 ******************************************************************************************************************************/

/* Optional inclusion! */
#ifndef MY_FUNCTIONS_H

	#define MY_FUNCTIONS_H

	/// The constant value of pi.	
	const static double PI=3.141592653589793;

	/// This function computes the volume of a cube (with side length equal to 'd').
	double volume(double d);
	
	/// This function computes the volume of a cylinder (with radius equal to 'r' and height equal to 'h').
	double volume(double r,double h);

	/// This function computes the volume of a cuboid with width equal to 'a', depth equal to 'b', and height equal to 'c'.
	double volume(double a,double b,double c);

#endif
