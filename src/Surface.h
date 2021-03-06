#pragma once

#include <SDL2/SDL.h>
#include <stdint.h>

#define SURFACE_PIXEL_FORMAT (SDL_PIXELFORMAT_ARGB8888)

#define SURFACE_BIT_DEPTH (32)

#define SURFACE_COLOR_KEY (0x0000FFFF)

#define SURFACE_ALPHA (24)

void Surface_PutPixel(SDL_Surface* const, const int32_t x, const int32_t y, const uint32_t color);

uint32_t Surface_GetPixel(SDL_Surface* const, const int32_t x, const int32_t y);

void Surface_Clear(SDL_Surface* const, const uint32_t color);

SDL_Surface* Surface_New(const int32_t width, const int32_t height);
