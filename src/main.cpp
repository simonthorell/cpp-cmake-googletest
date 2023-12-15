#include <iostream>
#include "mylib.h"

#include <vector>       // std::vector
#include <ranges>       // std::ranges, std::views
#include <algorithm>    // std::for_each

int main() {
    std::vector<int> v{1, 2, 3, 4, 5};

    // Print all elements
    std::cout << "All elements: ";
    std::ranges::for_each(v, [](int i) { std::cout << i << ' '; });
    std::cout << '\n';

    // Create a view that contains only even numbers
    auto even_view = v | std::views::filter([](int i) { return i % 2 == 0; });

    // Print only even elements using the view
    std::cout << "Even elements: ";
    std::ranges::for_each(even_view, [](int i) { std::cout << i << ' '; });
    std::cout << '\n';

    // std::cout << "Hello, World!" << std::endl;
    return 0;
}