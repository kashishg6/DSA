#include <iostream>
#include <unordered_map>
#include <vector>

bool findKeyPair(const std::vector<int>& arr, int target) {
    std::unordered_map<int, int> map;

    for (int num : arr) {
        int complement = target - num;
        
        if (map.find(complement) != map.end()) {
            std::cout << "Pair found: (" << complement << ", " << num << ")\n";
            return true;
        }

        map[num] = 1;
    }

    std::cout << "No pair found with the given target sum.\n";
    return false;
}

int main() {
    std::vector<int> arr = {2, 7, 11, 15, 1, 8};
    int target = 9;

    findKeyPair(arr, target);

    return 0;
}