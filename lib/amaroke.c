/*
 * Copyright (c) 2025 Marcin Różewski, Amarokelab.
 * All rights reserved.
 *
 * Implementation of the AMAROKE static library.
 *
 * This file contains the implementation of functions for advanced terminal
 * output, including text printing with customizable colors.  Additional
 * functions may be added in the future as the library evolves.
 */

#include "amaroke.h"

#include <stdio.h>

void cprint(const char *text, int background, int foreground)
{
    printf("\e[48;5;%dm\e[38;5;%dm%s\e[0m\n", background, foreground, text);
}
