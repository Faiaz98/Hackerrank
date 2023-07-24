#include <iostream>
#include <vector>
#include <algorithm>

int longestSubarray(const std::vector<int>& arr) {
    int longestLength = 0;
    std::vector<int> count(100);
    for (int num : arr) {
        count[num]++;
    }

    for (int i = 1; i < count.size(); ++i) {
        longestLength = std::max(longestLength, count[i] + count[i - 1]);
    }

    return longestLength;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int result = longestSubarray(arr);
    std::cout << "" << result << std::endl;

    return 0;
}