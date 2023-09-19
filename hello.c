#include <stdio.h>
void print_hello(void);
int main(void)
{
    print_hello();
    return 10;
}
void print_hello(void)
{
    printf("Hello World\n");
    return;
}
