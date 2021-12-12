#include "Path.h"

#include <shlobj_core.h>
#pragma comment(lib, "Shell32.lib")

std::string MOONG::PATH::Path::GetProgramFiles()
{
	char directory_programfiles[MAX_PATH] = { 0 };

	SHGetSpecialFolderPathA(0, directory_programfiles, CSIDL_PROGRAM_FILES, FALSE);

	return directory_programfiles;
}