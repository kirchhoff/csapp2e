#include <stdio.h>
int uadd_ok(unsigned x,unsigned y)
{
     int s=x+y;
     return s<x?0:1;
}
int main(int argc, char *argv[])
{
     printf("%d\n",uadd_ok(1111111111111111,2222222222222222222)) ;
     printf("%d\n",uadd_ok(11,22)) ;
     return 0;
}
