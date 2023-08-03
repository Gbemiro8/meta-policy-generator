#ifndef UTIL_
#define UTIL_

#include <filesystem>
#include <string>
#include <vector>

namespace util {
    
std::vector<std::string> split_filepath_by_delimeter(const std::string &filepath, char delimeter) noexcept;
std::string join_filepath(const std::vector<std::string> &filepath, char delimeter);
// FILE find_meta_file(std::vector<std::string> filepaths);

}

#endif // !UTIL_
