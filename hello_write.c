// Jackson Parrack
// 1/22/2025
// Prints "Hello World!" to the console using write.

#include <unistd.h>

int main( int argc, char* argv[] ){
        write(STDOUT_FILENO, "Hello World!\n", 14);
        return 0;
}