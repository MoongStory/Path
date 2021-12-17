// https://github.com/MoongStory/Path

#if _MSC_VER > 1000
#pragma once
#endif

#ifndef _PATH_H_
#define _PATH_H_

#include <iostream>

namespace MOONG
{
	namespace PATH
	{
		class Path
		{
		public:
			std::string GetProgramFiles();
		};
	}
}

#endif _PATH_H_