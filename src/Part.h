#pragma once

#include "Point.h"
#include "Graphics.h"
#include "Civ.h"

#include <stdbool.h>

typedef struct
{
    Point cart;
    bool can_civ;
    bool subtract_index;
    Graphics file;
}
Part;

bool Part_MustSubtractIndex(Part* const, const Civ);
