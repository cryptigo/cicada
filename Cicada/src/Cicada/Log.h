#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Cicada {

	class CICADA_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define CE_CORE_TRACE(...)		::Cicada::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CE_CORE_INFO(...)		::Cicada::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CE_CORE_WARN(...)		::Cicada::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CE_CORE_ERROR(...)		::Cicada::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CE_CORE_FATAL(...)		::Cicada::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define CE_TRACE(...)			::Cicada::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CE_INFO(...)			::Cicada::Log::GetClientLogger()->info(__VA_ARGS__)
#define CE_WARN(...)			::Cicada::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CE_ERROR(...)			::Cicada::Log::GetClientLogger()->error(__VA_ARGS__)
#define CE_FATAL(...)			::Cicada::Log::GetClientLogger()->fatal(__VA_ARGS__)
