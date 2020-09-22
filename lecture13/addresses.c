// addresses.c

#include <stdio.h>
#include <stdlib.h>

int global = 0;

int main(int argc, char *argv[]) {
    int local = 1;

    printf("Location of STACK: %14p\n", &local);
    printf("Location of HEAP:  %14p\n", malloc(1));
    printf("Location of DATA:  %14p\n", &global);
    printf("Location of CODE:  %14p\n", main);

    return EXIT_SUCCESS;
}
