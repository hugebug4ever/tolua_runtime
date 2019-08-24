#define LUA_LIB

#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "msvcint.h"

#include "lua.h"
#include "lauxlib.h"
#include "sproto.h"

// xilei 20190824 for sproto
#if LUA_VERSION_NUM < 502
int64_t lua_tointegerx(lua_State *L, int idx, int *isnum) {
	if (lua_isnumber(L, idx)) {
		if (isnum) *isnum = 1;
		return (int64_t)lua_tointeger(L, idx);
	}
	else {
		if (isnum) *isnum = 0;
		return 0;
	}
}
#endif
