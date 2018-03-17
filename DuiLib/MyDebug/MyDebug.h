#ifndef __MYDEBUG_H__
#define __MYDEBUG_H__

#pragma once

namespace DuiLib
{
	class DUILIB_API CMyDebug
	{
	public:
		CMyDebug();

		static void Log(const char * format,...);
	protected:
	
	};

}	// namespace DuiLib

#endif // __MYDEBUG_H__