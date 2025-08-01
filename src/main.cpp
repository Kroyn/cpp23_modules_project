import custom;
import std;

int main() {
    std::println("Hello, C++23 modules with std!");

    // From custom
    Custom::simplePrint();

    std::println("{}", Custom::stringReturn());

    std::vector simpleVector { 1, 2, 3, 4, 5 };
    Custom::printVector(simpleVector);

    return 0;
}
