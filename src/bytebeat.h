#pragma once

#include <xtl.h>

class ByteBeat
{
public:
    ByteBeat();

    void Reset();
    unsigned char Generate();

private:
    unsigned int t;
};