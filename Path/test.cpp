#include "Path.h"

#include <iostream>

int main()
{
	std::cout << "get_directory_programfiles[" << MOONG::Path::get_directory_programfiles().c_str() << "]" << std::endl;

	std::cout << "get_directory_desktop[" << MOONG::Path::get_directory_desktop().c_str() << "]" << std::endl;

	return EXIT_SUCCESS;
}