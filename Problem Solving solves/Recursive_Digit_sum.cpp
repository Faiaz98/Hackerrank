#include <iostream>
#include <string>

int calculateSuperDigit(const std::string& x, int k) {
    if (x.length() == 1) {
        return std::stoi(x);
    }
    
    int sum = 0;
    for (char digit : x) {
        sum += digit - '0'; 
    }
    
    return calculateSuperDigit(std::to_string(sum * k), 1); 
}

int main() {
    std::string x;
    int k;
    std::cin >> x;
    std::cin >> k;

    int superDigit = calculateSuperDigit(x, k);
    std::cout << "" << superDigit << std::endl;

    return 0;
}