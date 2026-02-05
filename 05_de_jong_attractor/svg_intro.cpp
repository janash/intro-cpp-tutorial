#include <iostream>
#include <fstream>

int main() {
    // Open a file for writing
    std::ofstream file("shapes.svg");

    // Write SVG header
    file << "<svg xmlns='http://www.w3.org/2000/svg' width='400' height='400'>\n";

    // Draw a rectangle as the background
    file << "<rect width='100%' height='100%' fill='black'/>\n";

    // Draw a circle: cx, cy = center position, r = radius
    file << "<circle cx='200' cy='200' r='50' fill='cyan'/>\n";

    // Close the SVG
    file << "</svg>\n";
    file.close();

    std::cout << "Created shapes.svg" << std::endl;
    return 0;
}
