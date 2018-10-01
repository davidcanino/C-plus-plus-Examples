/***********************************************************************************************************************************************************************
 * Examples in the C++ language (the 'Example-010' Test).
 *
 * GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
 *
 * Created by David Canino (canino.david@gmail.com), October 2018.
 *
 * myvariadic.h - the C++ header file, where the 'variadic' functions, used by the 'Example-010' Test, are defined.
 ***********************************************************************************************************************************************************************/

/* Optional inclusion! */
#ifndef MY_VARIADIC_H

	/// This <i>'variadic'</i> function computes the average of an arbitrary number of parameters.
	/**
	 * The first parameter is the arbitrary number of the following parameters, excluding the first parameters. We assume that their arguments are 'double' floating
	 * point values.
	 */
	double average(unsigned int count,...);

	/// This function simulates a pause while this test runs.
	void pause(bool end = true);

#endif

