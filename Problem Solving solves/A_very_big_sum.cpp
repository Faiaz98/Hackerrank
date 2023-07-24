#include <iostream>
#include <string>

std::string addLargeIntegers(const std::string& num1, const std::string& num2){
    std::string sum;
    int carry = 0;
    int i = num1.length() - 1;
    int j = num2.length() - 1;
    
    while ( i >= 0 || j >= 0 || carry > 0){
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;
        int digitSum = digit1 + digit2 + carry;
        
        sum.insert(sum.begin(), digitSum % 10 + '0');
        carry = digitSum / 10;
        
        i--;
        j--;
    }
    
    return sum;
}

int main () {
    int n;
    std::cin >> n;
    
    std::string sum = "0";
    for (int i = 0; i < n; i++) {
        std::string num;
        std::cin >> num;
        sum = addLargeIntegers(sum, num);
    }
    
    std::cout << "" << sum << std::endl;
    
    return 0;
}
