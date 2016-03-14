#pragma once

#include <stdint.h>
#include "object-internals.h"

struct Il2CppObject;
struct Il2CppDelegate;
struct Il2CppReflectionType;
struct Il2CppReflectionMethod;
struct Il2CppReflectionField;
struct Il2CppArray;
struct Il2CppException;
struct Il2CppReflectionModule;
struct Il2CppAssembly;
struct Il2CppAssemblyName;
struct Il2CppAppDomain;

namespace il2cpp
{
namespace icalls
{
namespace mscorlib
{
namespace System
{
namespace Threading
{

class ThreadPool
{
public:
	static void GetAvailableThreads (int32_t* workerThreads, int32_t* completionPortThreads);
	static void GetMinThreads (int32_t* workerThreads, int32_t* completionPortThreads);
	static bool SetMaxThreads (int32_t workerThreads, int32_t completionPortThreads);
	static bool SetMinThreads (int32_t workerThreads, int32_t completionPortThreads);
	static void GetMaxThreads (int32_t* workerThreads, int32_t* completionPortThreads);
};

} /* namespace Threading */
} /* namespace System */
} /* namespace mscorlib */
} /* namespace icalls */
} /* namespace il2cpp */
