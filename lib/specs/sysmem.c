#include <stddef.h>

// defined from linker script
extern int end;

void* _sbrk(int incr)
{
    static unsigned char* heap = NULL;
    unsigned char* prev_heap;

    if (heap == NULL)
    {
        heap = (unsigned char*)&end;
    }
    prev_heap = heap;

    heap += incr;

    return prev_heap;
}
