#include <iostream>
#include "my_functions.h"

#include <vector>       // std::vector
#include <ranges>       // std::ranges, std::views
#include <algorithm>    // std::for_each

int main() {
    my_function();

    std::vector<int> v{1, 2, 3, 4, 5};

    // Print all elements using ranges from C++20
    std::cout << "All elements: ";
    std::ranges::for_each(v, [](int i) { std::cout << i << ' '; });
    std::cout << '\n';

    // Create a C++20 view that contains only even numbers
    auto even_view = v | std::views::filter([](int i) { return i % 2 == 0; });

    // Print only even elements using the view
    std::cout << "Even elements: ";
    std::ranges::for_each(even_view, [](int i) { std::cout << i << ' '; });
    std::cout << '\n';

    // Prompt user to input "hello"
    std::cout << "Please enter \"hello\": ";
    std::string s;
    std::cin >> s;

    if (s == "hello") {
        std::cout << "Hello to you too!\n";
    } else {
        std::cout << "You didn't say hello :(\n";
    }

    return 0;
}