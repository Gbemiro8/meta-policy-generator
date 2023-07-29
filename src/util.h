#ifndef UTIL_
#define UTIL_

#include <filesystem>
#include <string>
#include <vector>

namespace util {
    
std::vector<string> split_string_by_delimeter(char *filepath, char delimeter);
FILE find_meta_file(std::vector<std::string> paths);

}

#endif // !UTIL_
