#include <cmath>
#include <iostream>

int main() {
    double angle = 1.5;  // radians, not degrees

    double sine_value = std::sin(angle);
    double cosine_value = std::cos(angle);

    std::cout << "sin(1.5) = " << sine_value << std::endl;
    std::cout << "cos(1.5) = " << cosine_value << std::endl;

    return 0;
}
