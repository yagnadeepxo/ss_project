#include "./map.h"

/* Basic `MAP` usage: */
#define STRING(x) char const *x##_string = #x;
MAP(STRING, foo, bar, baz)

/* Basic `MAP_LIST` usage: */
#define PARAM(x) int x
void function(MAP_LIST(PARAM, foo, bar, baz));

/* Test `MAP` with parentheses in the arguments: */
#define CALL(x) putchar x
MAP(CALL, ('1'), ('b'), ('c'))

// #define end()
// MAP_END(end)

/* Test `MAP_LIST` with parentheses in the arguments: */
#define CALL_LIST(x) putchar x
MAP_LIST(CALL_LIST, ('a'), ('b'), ('c'));

