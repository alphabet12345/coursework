#define CTEST_MAIN

#include "ctest.h"
#include "../src/unit.cpp"
#include "test.c"

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}
