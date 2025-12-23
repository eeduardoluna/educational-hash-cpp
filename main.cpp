#include <iostream>
#include "hash.h"

int main() {
    std::string teste1 = "hello world";
    std::string teste2 = "2025";
    std::string teste3 = "HashTest";

    uint64_t hash1 = simple_hash(teste1);
    uint64_t hash2 = simple_hash(teste2);
    uint64_t hash3 = simple_hash(teste3);
    // resultados em hexadecimal
    std::cout << "Hash of \"" << teste1 << "\": " << std::hex << hash1 << std::endl;
    std::cout << "Hash of \"" << teste2 << "\": " << std::hex << hash2 << std::endl;
    std::cout << "Hash of \"" << teste3 << "\": " << std::hex << hash3 << std::endl;

    return 0;
}
