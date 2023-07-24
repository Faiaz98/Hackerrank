#include <iostream>
#include <string>

int countDivisors(int num) {
    int originalNum = num;
    int count = 0;

    while (num != 0) {
        int digit = num % 10;
        if (digit != 0 && originalNum % digit == 0) {
            count++;
        }
        num /= 10;
    }

    return count;
}

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        int divisorCount = countDivisors(num);
        std::cout << divisorCount << std::endl;
    }

    return 0;
}