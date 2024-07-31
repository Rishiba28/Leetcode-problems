#include <iostream>
#include <string>
#include <cctype>

bool halvesAreAlike(std::string s) {
    int mid = s.size() / 2;
    int vowelCountA = 0, vowelCountB = 0;

    for (int i = 0; i < mid; ++i) {
        char c = std::tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowelCountA++;
        }
    }

    for (int i = mid; i < s.size(); ++i) {
        char c = std::tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowelCountB++;
        }
    }

    return vowelCountA == vowelCountB;
}

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::cin >> inputString;

    bool result = halvesAreAlike(inputString);
    std::cout << (result ? "true" : "false") << std::endl;

    return 0;
}
