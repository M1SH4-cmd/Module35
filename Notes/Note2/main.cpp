#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {

    fs::path p("C:\\Users\\User\\Desktop\\Module35\\file.txt");

    std::cout << space(p).free / 1024 / 1024 / 1024 << std::endl;


    return 0;
}
