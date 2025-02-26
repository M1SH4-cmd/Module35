#include <iostream>
#include <filesystem>
#include <vector>

namespace fs = std::filesystem;



auto recursiveGetFileNamesByExtension = [](std::filesystem::path path, const std::string extension) {
    std::vector<std::string> names;

    for(const auto& p: fs::recursive_directory_iterator(path)) {
        if (p.is_regular_file() && p.path().extension() == extension) {
            names.push_back(p.path().filename().string());
        }

    }
    return names;
};



int main() {

    fs::path path = "C:\\Users\\User\\Desktop\\C++\\cpp_libs";
    std::string extension = ".zip";

    auto names = recursiveGetFileNamesByExtension(path, extension);

    for (auto &p : names) {
        std::cout << p << std::endl;
    }


    return 0;
}
