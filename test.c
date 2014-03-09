#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
struct xx{
     int a;
     int b;
};
int main(int argc, char *argv[])
{
     printf("%d\n",2147483648u);
     printf("%u\n",-2147483647-1);
     printf("%d\n",-2147483647-1<2147483647);
     printf("%d\n",-2147483647-1u<2147483647);
     printf("%u\n",-2147483647-1u);
     printf("%d\n",-2147483647-1<2147483647);
     printf("%d\n",-2147483648);
     short int u=0xf4;
     short int y=0xf1;
     printf("%x\n",u+y);
     struct xx * x=(struct xx *)malloc(4*sizeof(struct xx));
     x[0].a=3;
     x[1].a=4;
     struct xx * x2=(struct xx *)malloc(4*sizeof(struct xx));
     memcpy(x2,x,4*sizeof(struct xx));
     printf("xxxxxxxxxxxxxxxxxxxxx\n");
     for(int i=0;i<4;++i)
     {
          printf("%d\n",x2[i].a);
     }
     x[1].a=55;
     for(int i=0;i<4;++i)
     {
          memcpy(xx)
               }
     return 0;
}
