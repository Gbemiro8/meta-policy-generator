#include<iostream>
#include "pfile.h"
#include <filesystem>

#define NUM_COMMAND_LINE_ARGUMENT 2
#define PROGRAM_NAME "meta-touch"
#define META_FILE "meta-info"

int main(int argc, char **argv) {
    // The binary would work in the form of meta-touch
    // meta-touch foo.cpp

    // TODO: this would be changed, when we want to support creating multiple files
    if (argc != NUM_COMMAND_LINE_ARGUMENT) {
        printf("%s expects only %d arguments", PROGRAM_NAME, NUM_COMMAND_LINE_ARGUMENT);
        exit(EXIT_FAILURE);
    }
    

    // sanitize file name - check that it is correct example make sure it's a string not number

    Pfile *pfile = new Pfile(argv[1]);

    // the program will search for a file called meta-info in the current working dir and recurse up if it does not find
    // then whatever is in the the meta-info, it copies into the file created.

    std::filesystem::path cwd = std::filesystem::current_path();

    std::cout << cwd;

    pfile->myfile << "something random";

    delete pfile;
    
    return 0;
}
