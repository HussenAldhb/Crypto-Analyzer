# Crypto Price Analyzer
A C++ program to calculate the total value of your cryptocurrency portfolio.

## Features
- Input prices and amounts for Bitcoin and Ethereum.
- Calculates individual and total portfolio value.
- Displays the highest and lowest prices entered.

## How to Run
1. Install a C++ compiler (e.g., MinGW for Windows: https://www.mingw-w64.org/downloads/).
2. Download `crypto_analyzer.cpp` from this repository.
3. Open a terminal in the file's folder.
4. Compile: `g++ crypto_analyzer.cpp -o crypto_analyzer`.
5. Run: `crypto_analyzer` (Windows) or `./crypto_analyzer` (Linux/Mac).
- For non-programmers: Download the optional `crypto_analyzer.exe` (if provided) and double-click to run (Windows only).

## Example
- Input: Bitcoin Price: $50,000, Amount: 0.1 | Ethereum Price: $2,000, Amount: 2
- Output: Total Portfolio Value: $9,000, Highest: $50,000, Lowest: $2,000
