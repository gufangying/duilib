#include "stdafx.h"
#include "MyDebug.h"

namespace DuiLib
{
	void CMyDebug::Log(const char * format,...)
	{
#ifdef _DEBUG
		char buf[2048];        
		va_list ap;        
		va_start(ap, format);        
		_vsnprintf(buf, sizeof(buf), format, ap);        
		va_end(ap);        
		OutputDebugString(buf);
#else

#endif
	}
}