#include <stdio.h>
void printBase2(int lval,int bits)
{
     for(int i=1;i<=bits;++i)
     {
          printf("%c",lval<0?'1':'0');
          if(i%8==0)printf(" ");
          lval<<=1;
     }
     printf("\n");
}
int main(int argc, char *argv[])
{
     int lval=0xfedcba98;
     printf("%x\n",lval<<32);
     printf("%x\n",lval>>36);
     printBase2(0xc3,32);
     printBase2(0xc3<<3,32);
     printBase2(0xc3>>2,32);
     return 0;
}
