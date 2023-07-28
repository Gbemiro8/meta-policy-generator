#ifndef P_FILE_H
#define P_FILE_H

#include <iostream>

struct Pfile {
    char *filename;

    Pfile (char *_filename);

    void print_filename() const;
    size_t len_filename() const;
};

#endif // P_FILE_H
