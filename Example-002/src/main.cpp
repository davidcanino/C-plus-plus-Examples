/**********************************************************************************************
 * Examples in the C++ language (the 'Example-002' Test).
 *
 * GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
 *
 * Created by David Canino (canino.david@gmail.com), September 2018.
 *
 * main.cpp - the source file, implementing the main function for the 'Example-002' Test.
 **********************************************************************************************/

#include <cstdio>
#include <cstdlib>
using namespace std;

/// The main function for the <i>'Example-002'</i> Test.
int main(void)
{
	/* This is the 'Example-002' Test, near to be the classic 'Hello World!" example! */
	puts("\n\tThis is the 'Example-002' Test in the C++ language.");
	puts("\t=====================================================\n");
    puts("\tHello World!\n");
    puts("\t=====================================================\n");
    fprintf(stdout,"\tPress the <RETURN> key to finish ... ");
    fflush(stdout);
    getchar();
	#ifndef _MSC_VER
        puts("");
    fflush(stdout);
	#endif
	return EXIT_SUCCESS;
}
