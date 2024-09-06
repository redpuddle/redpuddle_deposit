#include <iostream>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    std::cin >> n;

    int count = 0;
    int sum = 0;

    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            count++;
            sum += i;
        }
    }

    std::cout << count << "(რაოდენობა)" << std::endl;
    std::cout <<  sum << "(ჯამი)" <<std::endl;

    return 0;
}
