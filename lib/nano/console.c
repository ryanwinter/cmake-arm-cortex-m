int _read(int file, char* ptr, int len)
{
    int DataIdx;
    for (DataIdx = 0; DataIdx < len; DataIdx++)
    {
//        *ptr++ = __io_getchar();
    }

    return len;
}

int _write(int file, char* ptr, int len)
{
    int DataIdx;
    for (DataIdx = 0; DataIdx < len; DataIdx++)
    {
//        __io_putchar(*ptr++);
    }
    return len;
}
