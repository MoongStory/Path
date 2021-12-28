// https://github.com/MoongStory/Path

#if _MSC_VER > 1000
#pragma once
#endif

#ifndef _PATH_H_
#define _PATH_H_

#include <atlstr.h>

namespace MOONG
{
	namespace PATH
	{
		class Path
		{
		public:
			const CStringA GetDirectory_ProgramFiles() const;
		};
	}
}

#endif _PATH_H_