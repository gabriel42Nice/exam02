
#include <unistd.h>

void print_bit(unsigned char octet)
{
    int i = 8;
    char bit;

    while (i--)
    {
        bit = (octet >> i & 1) + '0';
        write (1, &bit, 1);
    }
}

/*----------------------------------version 2 --------------------------------*/
void print_bit(unsigned char octet)
{
    int i = 8;
    unsigned char bit = 0;

    while (i--)
    {
        bit = (octet >> i & 1) + '0';
        write (1, &bit, 1);
    }
}
