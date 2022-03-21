#include <stddef.h>

#ifdef __ICCARM__
size_t __read(int file, unsigned char *ptr, size_t len)
#elif __GNUC__
int _read(int file, char *ptr, int len)
#else
#error unknown compiler
#endif
{
    int DataIdx;
    for (DataIdx = 0; DataIdx < len; DataIdx++)
    {
//        *ptr++ = __io_getchar();
    }

    return len;
}

#ifdef __ICCARM__
size_t __write(int file, const unsigned char *ptr, size_t len)
#elif __GNUC__
int _write(int file, char *ptr, int len)
#else
#error unknown compiler
#endif
{
    int DataIdx;
    for (DataIdx = 0; DataIdx < len; DataIdx++)
    {
//        __io_putchar(*ptr++);
    }
    return len;
}
