#include "Path.h"

#include <iostream>

int main()
{
	MOONG::PATH::Path path;

	std::cout << path.GetDirectory_ProgramFiles() << std::endl;

	return EXIT_SUCCESS;
}