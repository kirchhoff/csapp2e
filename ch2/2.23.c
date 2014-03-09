#include <stdio.h>
int fun1(unsigned word)
{
     return (int)((word<<24)>>24);
}
int fun2(unsigned word)
{
     return ((int)word << 24) >> 24;
}
int main(int argc, char *argv[])
{
     unsigned int w=0x00000076;
     w=0x87654321;
     w=0x000000c9;
     w=0xedcba987;
     printf("%x\n",fun1(w));
     printf("%x\n",fun2(w));

     return 0;
}
