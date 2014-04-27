#include<stdio.h>
int counter = 0;
int f(){
     return counter++;
}
int func1(){
     return f() + f() +f() +f();
}
int func2(){
     return 4 * f();
}
int main(int argc, char *argv[])
{
     printf("%d\n",func1());
     return 0;
}
