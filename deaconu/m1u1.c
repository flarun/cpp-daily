/* 

The manual's main signature at page 14 does not compile.

void main(int narg, char argv *arg[])
{
  
}

m1u1.c:1:31: error: expected ‘;’, ‘,’ or ‘)’ before ‘*’ token
    1 | void main(int narg, char argv *arg[])
      |                               ^  

*/

#include <stdio.h>

#if defined(_WIN32)
    #define OS_NAME "Windows"
#elif defined(__APPLE__) || defined(__MACH__)
    #define OS_NAME "macOS"
#elif defined(__linux__)
    #define OS_NAME "Linux"
#else
    #define OS_NAME "a funny OS that C can't recognize"
#endif

void main(int narg, char *arg[])
{
  printf("We are working on %s\n", OS_NAME);
}