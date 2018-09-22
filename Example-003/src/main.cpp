/**********************************************************************************************
 * Examples in the C++ language (the 'Example-003' Test).
 *
 * GitHub repository: https://github.com/davidcanino/C-plus-plus-Examples
 *
 * Created by David Canino (canino.david@gmail.com), September 2018.
 *
 * main.cpp - the source file, implementing the main function for the 'Example-003' Test.
 **********************************************************************************************/

#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <sstream>

/// The main function for the <i>'Example-003'</i> Test.
int main(int argc,char **argv)
{
	unsigned long n = 10 + std::string(argv[0]).size() + std::string("\tThe executable file for this program is the ").size();

	/* This is the 'Example-003' Test, which is the 'echo testing' for the shell parameters! */
	std::cout << std::endl <<"\tThis is the \'Example-003\' Test in the C++ language."<< std::endl;
	if(argc>=2)
	{
		for(int k=1;k<argc;k++)
		{
			std::ostringstream ss;
			std::string aux;

			/* Now, we compose the string for understanding the maximum number of the '=' chars to be added! */
			ss << (k-1);
			aux = ss.str();
			aux = std::string("\t\t-) the shell parameter #") + aux + std::string(" is the \'") + std::string(argv[k]) + std::string("\' string ");
			n = std::max( n, aux.size()+10);
		}
	}
	else { n = std::max( n, std::string("\tThere is no shell parameter for this program.").size()+5); }
	
	/* Now, we finalize our results! */
	std::cout << "\t" << std::string(n,'=') << std::endl << std::endl;
	std::cout << "\tThe executable file for this program is the \'"<<argv[0]<<"\' file." << std::endl;
	if(argc>1)
	{
		if(argc==2) std::cout << "\tThere is only one shell parameter for this program:" << std::endl << std::endl;
		else std::cout << "\tThere are "<<(argc-1)<<" shell parameters for this program:"<< std::endl << std::endl;
		for(int k=1;k<argc;k++)
		{
			std::cout << "\t\t-) the shell parameter #"<<(k-1)<<" is the \'"<<argv[k]<<"\' string";
			if(k<argc-1) { std::cout << ";" << std::endl << std::endl; }
			else { std::cout << "." << std::endl << std::endl; }
		}
	}
	else { std::cout << "\tThere is no shell parameter for this program." << std::endl << std::endl; }
	
	/* If we arrive here, then all is ok! */
	std::cout << "\t" << std::string(n,'=') << std::endl << std::endl;
	std::cout << "\tPress the <RETURN> key to finish ... ";
	std::cout.flush();
	std::cin.get();
	#ifndef _MSC_VER
		std::cout << std::endl;
		std::cout.flush();
	#endif
	return EXIT_SUCCESS;
}

