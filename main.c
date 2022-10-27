#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    // char buf[1024];
    // char fill = '#';
    int sz = atoi(argv[1]);
    printf ("[%*s]\n", sz, argv[2]);
    return 0;
}     