#include <iostream>
#include <vector>

std::vector<int> generateArray(int n) {
    std::vector<int> result;

    for (int i = 0; i < n - 1; i++) {
        result.push_back(-1);
    }

    int sum = -(n - 1);
    result.push_back(sum);

    if (n > 2) {
        result.push_back(0);
    }

    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr = generateArray(n);

    std::cout << "[";
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i];
        if (i != arr.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]";

    return 0;
}
