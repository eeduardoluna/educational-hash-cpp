#include "hash.h"
uint64_t simple_hash(const std::string& input){
    uint64_t hash = 14695987034346686737ULL;
    for(char c : input){
        hash ^= static_cast <uint64_t>(c);
        hash *= 1099511628211ULL; // FNV-1a
    }
    return hash;
}
