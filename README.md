# educational-hash-cpp
Simple 64-bit hash implementation in C++.
This repository contains an implementation of a simple hash function created strictly for educational purposes.
The main goal is to demonstrate basic ideas behind hash functions, such as: 
- Mapping arbitrary data to fixed-size values
- Determinism (same input → same output)
- Basic bitwise and arithmetic operations

## How it Works 
The hash function processes the input byte by byte, updating a 64-bit internal state.
Each byte is mixed using bitwise operations and integer arithmetic to spread small input changes across the output.
The final value depends deterministically on all input bytes.

## Disclaimer 
This project is for learning purposes only.  
It is **not cryptographically secure** and must not be used in real-world applications.

If you need a real hash function, use well-established algorithms such as SHA-256, SHA-3, or BLAKE.
