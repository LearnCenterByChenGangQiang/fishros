#include <iostream>

int main(int argc, char *argv[]) {
    std::cout << "argc: " << argc << std::endl;
    
    std::cout << "argv: " << argv[0] << std::endl;

    std::string arg1 = argv[1];
    if(arg1 == "-h" || arg1 == "--help") {
        std::cout << "Help message" << std::endl;
    }

    return 0;
}