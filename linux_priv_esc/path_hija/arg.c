// arg.c
// compile with:
// gcc arg.c -o arg_example

/*
argc → (argument count) number of arguments passed to the program, including the program name itself.

argv → (argument vector) an array of strings (char pointers), each string is one argument

./program hello world
argc = 3
argv = ["./program", "hello", "world"]

argv[0] = "./program"
argv[1] = "hello"
argv[2] = "world"
><

*/

#include <stdio.h>

int main(int argc, char**argv) {
    // Validation
    if( argc < 2 ) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    printf("I dont make mistakes, %s\n", argv[1]);
    return 0;
}

