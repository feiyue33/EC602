#include <iostream>

int main(int argc, char* argv[]){
    for(int i=1; i<5; i++){
        std::cout << argv[i] << std::endl;
    }
    for(int i=5; i<=argc-1; i++){
        std::cerr << argv[i] << std::endl;
    }
    return 0;
}