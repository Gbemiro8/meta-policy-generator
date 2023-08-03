#include "util.h"

std::vector<std::string> util::split_filepath_by_delimeter(const std::string &filepath, char delimeter) noexcept {
    std::vector<std::string> folders;
    std::string tmp = "";

    for (char itr : filepath) {
        if (itr == delimeter) {
            folders.push_back(tmp);
            tmp = "";
        }
        else {
            tmp += itr;
        }
    }
    if (tmp.size()) {
        folders.push_back(tmp);
    }
    return folders;
}

std::string util::join_filepath(const std::vector<std::string> &filepath, char delimeter) {
    std::string tmp = "";
    for (auto path : filepath) {
        tmp += tmp + path + delimeter;
    }
    return tmp;
}

util::find_meta_file(std::vector<std::string> filepaths) {
    if (filepaths.size() == 0) {
        // do the correct thing when you reach the end of the file if the meta_file is not found
        throw Exception
    }
    std::string combined_path = util::join_filepath(filepaths, '/');
    for (const auto & entry : std::filesystem::directory_iterator(combined_path)) {
        // check to see if the meta_filename is in the entry
        std::cout << entry.path() << std::endl;

    }
    return util::find_meta_file(filepaths.pop_back());
    
    // join the filepaths together with delimeter /
    // find all the files in that directory
    // check if the file has same name with program name
    // do I want to be extension agnostic? yes
}
