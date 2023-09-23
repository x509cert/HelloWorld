#include <stdio.h>

int main()
{
    unsigned long long int a = 0x77E435B08;
    while (a) putchar(0x726F6C6564574820 >> (((a >>= 3) & 7) << 3) & 0xFF);
}
