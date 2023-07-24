#include <iostream>
#include <vector>

int findArraySum(const std::vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> ar(n);
    for (int i = 0; i < n; i++) {
        std::cin >> ar[i];
    }

    int sum = findArraySum(ar);
    std::cout << "" << sum << std::endl;

    return 0;
}
