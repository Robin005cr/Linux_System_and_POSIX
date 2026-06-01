#include <iostream>
#include "libcontrol.h"

int main()
{

    get_state();
    get_status();
    return 0;
}

//g++ -c state.cpp status.cpp  => creates state.o and status.o files
//ar rcs libcontrol.a status.o state.o => combine the .o files to the library libcontrol
//g++ main.cpp -L. -lcontrol -o main => -L.Look for libraries in the current directory (.)
//                                   => -lcontrol (strips the lib prefix and .a suffix)