// Copyright (c) 2025 Marcin Różewski, Amarokelab

// The header C demo project file for the AMAROKE static library.

#ifndef AMAROKE_H
#define AMAROKE_H

/**
 * Advance color text message printing on the stdout.
 *
 * @note Wrapper for the ANSI escape sequence, where 0 is black, 255 is white.
 *
 * @param text The text message to stdout print in the color on the terminal.
 * @param background The background color of the text.  A number from 0 to 255.
 * @param foreground The foreground color of the text.  A number from 0 to 255.
 */
void cprint(const char *text, int background, int foreground);

#endif
