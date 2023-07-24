#include <iostream>

void printStaircase(int n) {
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n-i; j++){
            std::cout << " ";
        }
        
        for (int j=1; j<= i; j++){
            std::cout << "#";
        }
        std::cout << std::endl;
    }
}

int main() {
    int size;
    std::cin >> size;
    
    printStaircase(size);
    
    return 0;
}
