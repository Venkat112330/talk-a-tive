c

#include <stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b)) 
int main() {
int x=5,y=10;
printf("%d %d %d\n",MAX(x++,y++),x,y); return 0;
}