#include "util.h"

std::vector<std::string> split_string_by_delimeter(char *filepath, char delimeter) noexcept {
    std::vector<string> paths; // change to better name
    std::string tmp = "";

    for (char *itr = filepath; *itr; itr++) {
        if (*itr == delimeter) {
            paths.push_back(tmp);
            tmp = "";
        }
        else {
            tmp += *itr;
        }
    }
    if (tmp) {
        paths.push_back(tmp);
    }
    return paths;
}
