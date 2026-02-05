// Add timing to measure how long your attractor takes
// Compile with: g++ -std=c++17 -o timed_attractor timed_attractor.cpp
// Try again with: g++ -std=c++17 -O2 -o timed_attractor timed_attractor.cpp

#include <iostream>
#include <fstream>
#include <cmath>
#include <chrono>

int main() {
    double a = -2.0, b = -2.0, c = -1.2, d = 2.0;
    int num_points = 1000000;  // One million points

    auto start = std::chrono::high_resolution_clock::now();

    // TODO: Copy your attractor code here (or write it fresh)

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    std::cout << "Generated " << num_points << " points in "
              << duration.count() << " ms" << std::endl;

    return 0;
}
