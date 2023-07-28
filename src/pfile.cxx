#include "pfile.h"

Pfile::Pfile(char *_filename) {
    filename = _filename;
}

void Pfile::print_filename() const {
    char *itr = filename;
    while (*itr) {
        printf("%c", *itr);
        itr++;
    }
    printf("\n");
}

size_t Pfile::len_filename() const {
    return strlen(filename);
}
