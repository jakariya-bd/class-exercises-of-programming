#include <stdio.h>
#include <time.h>

int main()
{
    time_t T;

    time( &T );

    printf("Current system time: %s\n", ctime(&T) );

    return 0;
}
