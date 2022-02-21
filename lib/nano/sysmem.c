#include <stddef.h>

extern int _end;

void* _sbrk(int incr)
{
    static unsigned char* heap = NULL;
    unsigned char* prev_heap;

    if (heap == NULL)
    {
        heap = (unsigned char*)&_end;
    }
    prev_heap = heap;

    heap += incr;

    return prev_heap;
}
