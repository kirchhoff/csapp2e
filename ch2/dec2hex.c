#include<stdio.h>
void dec2hex(int dec)
{
     if(dec/16!=0)
          dec2hex(dec/16);
     printf("%c",dec%16>=10?dec%16+'A'-10:dec%16+'0');
}
int main(int argc, char *argv[])
{
     int dec=314156;
     dec2hex(dec);
     return 0;
}
