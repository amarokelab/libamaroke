/*
 * Copyright (c) 2025 Marcin Różewski, Amarokelab.
 * All rights reserved.
 *
 * Demo program for the AMAROKE project.
 *
 * This file contains the examples usage of the first function on this library
 * and in the future this file may be removed or moved in another place.
 */

#include "lib/amaroke.h"

int main(void)
{
    const char *message  = " AMAROKE ";
    const int   bg_color = 4;  // Background color
    const int   fg_color = 7;  // Text color

    cprint(message, bg_color, fg_color);

    return 0;
}
