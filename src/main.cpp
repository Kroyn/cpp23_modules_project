import custom;
import std;
#include "config.hpp"

int main() {
    std::println("Hello, C++26 modules with std!");
    std::println("Project Version: {}", PROJECT::PROJECT_VERSION);

    // From custom
    Custom::simplePrint();

    std::println("{}", Custom::stringReturn());

    std::vector simpleVector { 1, 2, 3, 4, 5 };
    Custom::printVector(simpleVector);

    return 0;
}
