#include "bytebeat.h"

ByteBeat::ByteBeat()
{
    t = 0;
}

void ByteBeat::Reset()
{
    t = 0;
}

unsigned char ByteBeat::Generate()
{
    unsigned char sample =
        (unsigned char)(t * (t >> 5 | t >> 8));

    t++;

    return sample;
}