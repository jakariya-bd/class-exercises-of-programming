// I just copied from the internet :)

#include <stdio.h>
#include <time.h> // for time() and ctime() functions ... I think 

int main()
{
    time_t T;

    time( &T );

    printf("Current system time: %s\n", ctime(&T) );

    return 0;
}
