#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char* argv[]) {
    // self delete prgrm
    std::string path = argv[1];
    path += "\\main.exe";
    std::cout << path << std::endl;
    std::remove(path.c_str());
    return 1;
}

// brb
