#include <xtl.h>
#include "bytebeat.h"

void __cdecl main()
{
    ByteBeat bb;

    while (1)
    {
        unsigned char sample = bb.Generate();

        // TODO:
        // Send sample to audio buffer

        Sleep(1);
    }
}