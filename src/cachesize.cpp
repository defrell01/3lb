#include <iostream>
#include <chrono>

void cacheSize() {
    std::cout << "counting cache size" << std::endl;

    int steps = 128 * 1024 * 1024 / sizeof(int);
    int* arr = new int[128 * 1024 * 1024];
    int lenMode;
    int size;

    for (size = 1; (size * 1024) <= (sizeof(arr) * 128 * 1024 * 1024)/sizeof(int); size *= 2) {
        lenMode = (size * 1024) - 1;
        
        auto start = std::chrono::high_resolution_clock::now();

        for (int i = 0; i < steps; ++i) {
            arr[(i * 16) & lenMode]++;
        }

        auto end = std::chrono::high_resolution_clock::now();

        std::cout << "Size: " << size << "Kb\t\tTime: " << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << " ms" << std::endl; 
    }
}

int main() {
    cacheSize();

    return 0;
}