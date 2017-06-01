#pragma once

#ifdef UILIB_STATIC
#	define UILIB_API
#else
#	ifdef TESTDUILIB_EXPORTS
#		ifdef _MSC_VER
#			define UILIB_API __declspec(dllexport)
#		else 
#			define UILIB_API
#		endif
#	else
#		ifdef _MSC_VER
#			define UILIB_API __declspec(dllimport)
#		else 
#			define UILIB_API
#		endif
#	endif
#endif


#include <windows.h>
#include <WindowsX.h>