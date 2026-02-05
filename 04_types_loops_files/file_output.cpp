#include <iostream>
#include <fstream>

int main() {
    std::ofstream file("output.txt");

    file << "This text goes into the file." << std::endl;
    file << "So does this line." << std::endl;

    file.close();

    std::cout << "Done writing to output.txt" << std::endl;
    return 0;
}
