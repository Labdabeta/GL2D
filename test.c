#include <stdio.h> //for logging
#include "gl2d.h"

int main(int argc, char *argv[])
{
    gl2d_init(640,480,"TEST");
    
    gl2d_sleep(2000);

    gl2d_quit();
    
    return 0;
}
