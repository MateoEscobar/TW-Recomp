#pragma once
// [TWR-27] shim for the upstream VU1 build.
#include <cstdio>
#include <sstream>
#define RUNTIME_ERROR(expr) do { std::ostringstream _o; _o << expr; std::fprintf(stderr, "[vu1up] %s\n", _o.str().c_str()); } while (0)
