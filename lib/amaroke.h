/*
 * Copyright (c) 2025 Marcin Różewski, Amarokelab.
 * All rights reserved.
 *
 * Header file for the AMAROKE static library.
 *
 * This file declares functions for advanced terminal output, including text
 * printing with customizable colors.  As the library evolves, more functions
 * may be added to expand its capabilities.
 */

#ifndef AMAROKE_H
#define AMAROKE_H

/*
 * Prints a colored text message to the standard output.
 *
 * This function is a wrapper for ANSI escape sequences, allowing the user to
 * specify both background and foreground colors for terminal output.
 *
 * The first parameter is the text message to print in the color, and the
 * foreground and background color is a number from 0 to 255, where 0 is black
 * and 255 is white.
 */
void cprint(const char *text, int foreground, int background);

#endif
