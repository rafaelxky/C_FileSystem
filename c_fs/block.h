#pragma once
#include <stdbool.h>
    // saves the actual text data
    struct Block
    {
        char text[255];
        struct Block *next;
        bool inUse;
    };

