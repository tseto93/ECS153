#include <stdio.h>
#include <stdlib.h>

int trap(void)
{
    printf("Gotcha!\n");
    exit(0);
}

int getstr(void)
{
    char buf[12];
    gets(buf);
    return(1);
}

int main(void)
{
    getstr();
    printf("Overflow failed\n");
    return(1);
}
