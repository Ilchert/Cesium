#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    puts("test");
    int exitCode = abs(-42);
    exit(exitCode);
    return 0;
}