#include <iostream>
#include <string>
#include <unordered_set>

int numJewelsInStones(std::string jewels, std::string stones) {
    std::unordered_set<char> jewelsSet(jewels.begin(), jewels.end());
    int count = 0;
    for (char stone : stones) {
        if (jewelsSet.count(stone)) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string jewels, stones;
    std::cout << "Enter the types of jewels: ";
    std::cin >> jewels;
    std::cout << "Enter the stones you have: ";
    std::cin >> stones;

    int result = numJewelsInStones(jewels, stones);
    std::cout << "Number of stones that are also jewels: " << result << std::endl;

    return 0;
}
