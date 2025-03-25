#pragma once

#include "lualib.h"
#include "iostream"

#define LUAU_API extern "C" __declspec(dllexport)

LUAU_API int CustomPrint(lua_State* L);