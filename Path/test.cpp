#include "Path.h"

#include <iostream>

int main()
{
	std::cout << MOONG::Path::GetDirectory_ProgramFiles().c_str() << std::endl;

	return EXIT_SUCCESS;
}