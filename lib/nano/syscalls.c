#include <sys/stat.h>

void _exit(int status)
{
    while (1)
        ;
}

int _lseek(int file, int ptr, int dir)
{
    return 0;
}

int _fstat(int file, struct stat* st)
{
    st->st_mode = S_IFCHR;
    return 0;
}

int _isatty(int file)
{
    return 1;
}

int _close(int file)
{
    return -1;
}

void _kill(int pid, int sig)
{
    return;
}

int _getpid(void)
{
    return -1;
}
