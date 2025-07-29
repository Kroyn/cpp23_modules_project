import custom;
import std;

int main() {
    std::println("Hello, C++23 modules with std!");

    // From custom
    custom::simplePrint();

    std::println("{}", custom::stringReturn());

    std::vector simpleVector { 1, 2, 3, 4, 5 };
    custom::printVector(simpleVector);

    return 0;
}
