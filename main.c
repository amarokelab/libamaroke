// Copyright (c) 2025 Marcin Różewski, Amarokelab

// The main C demo program for the AMAROKE project.

#include "lib/amaroke.h"

int main(void)
{
    const char *message  = " AMAROKE ";
    const int   bg_color = 4;  // Background color
    const int   fg_color = 7;  // Text color

    cprint(message, bg_color, fg_color);

    return 0;
}
