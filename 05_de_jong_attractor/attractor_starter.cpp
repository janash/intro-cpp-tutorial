#include <iostream>
#include <fstream>
#include <cmath>

int main() {
    // Attractor parameters
    double a = -2.0, b = -2.0, c = -1.2, d = 2.0;
    int num_points = 100000;

    // Open output file and write SVG header
    std::ofstream file("attractor.svg");
    file << "<svg xmlns='http://www.w3.org/2000/svg' "
         << "width='800' height='800' viewBox='-3 -3 6 6'>\n";
    file << "<rect width='100%' height='100%' fill='black'/>\n";

    // Starting point
    double x = 0.0, y = 0.0;

    // YOUR CODE HERE:
    // Write a for loop that runs num_points times.
    // Inside the loop:
    //   1. Compute x_new and y_new using the De Jong equations:
    //      x_new = sin(a * y) - cos(b * x)
    //      y_new = sin(c * x) - cos(d * y)
    //   2. Write a circle to the file at position (x_new, y_new)
    //   3. Update x and y for the next iteration

    // Close SVG and file
    file << "</svg>\n";
    file.close();

    std::cout << "Wrote " << num_points << " points to attractor.svg\n";
    return 0;
}
