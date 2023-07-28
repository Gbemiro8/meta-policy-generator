#include<iostream>
#include "pfile.h"

#define NUM_COMMAND_LINE_ARGUMENT 2
#define PROGRAM_NAME "cf"

int main(int argc, char **argv) {
    // The binary would work in the form of cf (short for create file)
    // cf foo.cpp

    // TODO: this would be changed, when we want to support creating multiple files
    if (argc != NUM_COMMAND_LINE_ARGUMENT) {
        printf("%s expects only %d arguments", PROGRAM_NAME, NUM_COMMAND_LINE_ARGUMENT);
        exit(EXIT_FAILURE);
    }
    // sanitize file name - check that it is correct example make sure it's a string not number

    Pfile *pfile = new Pfile(argv[1]);

    pfile->print_filename();

    delete pfile;
    
    return 0;
}
