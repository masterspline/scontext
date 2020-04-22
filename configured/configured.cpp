/*
 * Copyright 2020 Alex Syrnikov <masterspline@gmx.com>
 * SPDX-License-Identifier: Apache-2.0
 */

#include <cstdio>
#include <configured/config.hpp>

int main()
{
#if defined CPP_VAR
    printf( "CPP_VAR defined\n" );
#endif

    return 0;
}
