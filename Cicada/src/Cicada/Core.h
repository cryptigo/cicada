#pragma once

#ifdef CE_PLATFORM_WINDOWS
	#ifdef CE_BUILD_DLL
		#define CICADA_API __declspec(dllexport)
	#else
		#define CICADA_API __declspec(dllimport)
	#endif
#else
	#error Cicada only supports Windows!
#endif