// Copyright (c) 2025 Marcin Różewski, Amarokelab

// The C demo project file for the AMAROKE static library implementation.

#include "amaroke.h"

#include <stdio.h>

void cprint(const char *text, int background, int foreground)
{
    printf("\e[48;5;%dm\e[38;5;%dm%s\e[0m\n", background, foreground, text);
}
