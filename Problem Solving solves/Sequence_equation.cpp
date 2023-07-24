#include <iostream>
#include <vector>

std::vector<int> findSequence(const std::vector<int>& p) {
    int n = p.size();
    std::vector<int> result(n);

    for (int x = 1; x <= n; ++x) {
        for (int y = 0; y < n; ++y) {
            if (p[p[y] - 1] == x) {
                result[x - 1] = y + 1;
                break;
            }
        }
    }

    return result;
}

int main() {
    int n;
    //std::cout << "Enter the number of elements in the sequence: ";
    std::cin >> n;

    std::vector<int> p(n);
    //std::cout << "Enter the elements of the sequence: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> p[i];
    }

    std::vector<int> result = findSequence(p);
    //std::cout << "Values of y for each x: ";
    for (int y : result) {
        std::cout << y << " \n";
    }
    std::cout << std::endl;

    return 0;
}
