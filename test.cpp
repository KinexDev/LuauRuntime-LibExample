#include "test.h"

LUAU_API int CustomPrint(lua_State* L)
{
	const char* string = lua_tostring(L, 1);
	std::cout << string << "\n";
	return 0;
}
