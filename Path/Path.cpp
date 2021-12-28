#include "Path.h"

#include <shlobj_core.h>
#pragma comment(lib, "Shell32.lib")

const CStringA MOONG::PATH::Path::GetDirectory_ProgramFiles() const
{
	char buffer[MAX_PATH] = { 0 };

	SHGetSpecialFolderPathA(0, buffer, CSIDL_PROGRAM_FILES, FALSE);

	CStringA directory_programfiles = buffer;

	return directory_programfiles;
}