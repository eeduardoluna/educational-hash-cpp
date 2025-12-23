# educational-hash-cpp
Simple 64-bit hash implementation in C++.
This repository contains a simple 64-bit hash function implemented in C++, based on the FNV-1a hashing scheme, created strictly for educational purposes.
The main goal is to demonstrate basic ideas behind hash functions, such as: 
- Mapping arbitrary data to fixed-size values
- Determinism (same input → same output)
- Basic bitwise and arithmetic operations

## How it Works 
The hash function processes the input byte by byte, updating a 64-bit internal state.
Each byte is mixed using bitwise operations and integer arithmetic to spread small input changes across the output.
The final value depends deterministically on all input bytes.

## Security Analisys
- From a security perspective, this hash function provides no resistance against deliberate collision attacks and should not be considered secure against adversarial inputs.
- It is vulnerable to hash flooding and does not provide strong avalanche properties required for cryptographic or security-sensitive use cases.

## Known Weakness
- Known limitations of this hash function include weak diffusion, predictable structure, and lack of collision resistance.
- Small or structured input variations may not sufficiently affect all output bits.

## API
uint64_t simple_hash(const std::string& input);
- Input : arbitrary string to be hashed.
- Output : Deterministic 64-bit hash value.
  - Time complexity : O(n) where n is the length of the input string.
  - Space complexity : O(1)

## Disclaimer 
This project is for learning purposes only.  
It is **not cryptographically secure** and must not be used in real-world applications.

If you need a real hash function, use well-established algorithms such as SHA-256, SHA-3, or BLAKE.
