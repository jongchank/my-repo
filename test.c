#include <stdio.h>
int main(void)
{
#ifdef __linux__ 
    printf("Hello World\n");
#else
    printf("Goodbye World\n");
#endif
    return 0;
}