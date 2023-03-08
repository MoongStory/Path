#include "Path.h"

#include <shlobj.h>
#pragma comment(lib, "Shell32.lib")

const std::string MOONG::Path::get_directory_programfiles()
{
	char buffer[MAX_PATH] = { 0 };

	SHGetSpecialFolderPathA(0, buffer, CSIDL_PROGRAM_FILES, FALSE);

	std::string directory_programfiles = buffer;

	return directory_programfiles;
}

const std::string MOONG::Path::get_directory_desktop()
{
	char buffer[MAX_PATH] = { 0 };
	
	//SHGetSpecialFolderPathA(0, buffer, CSIDL_DESKTOP, FALSE);
	SHGetSpecialFolderPathA(0, buffer, CSIDL_DESKTOPDIRECTORY, FALSE);
	//SHGetSpecialFolderPathA(0, buffer, CSIDL_COMMON_DESKTOPDIRECTORY, FALSE); // public
	
	std::string directory_programfiles = buffer;
	
	return directory_programfiles;
}




















