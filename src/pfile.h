#ifndef P_FILE_H
#define P_FILE_H

#include <iostream>
#include <fstream>

struct Pfile {
    char *filename;
    std::ofstream myfile;

    Pfile (char *_filename);
    ~Pfile();

    void print_filename() const;
    size_t len_filename() const;
};

#endif // P_FILE_H
