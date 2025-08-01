export module custom;

import std;

export namespace Custom {
  void simplePrint() {
    std::println("Print from custom::");
  }

  std::string_view stringReturn() {
    return "String working";
  }

  void printVector(const std::vector<int>& vec) {
    for (const auto& i : vec) {
      std::print("{} ", i);
    }
    std::println();
  }
}
