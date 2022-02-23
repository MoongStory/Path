#include "Path.h"

#include <shlobj.h>
#pragma comment(lib, "Shell32.lib")

const std::string MOONG::PATH::Path::GetDirectory_ProgramFiles() const
{
	char buffer[MAX_PATH] = { 0 };

	SHGetSpecialFolderPathA(0, buffer, CSIDL_PROGRAM_FILES, FALSE);

	std::string directory_programfiles = buffer;

	return directory_programfiles;
}