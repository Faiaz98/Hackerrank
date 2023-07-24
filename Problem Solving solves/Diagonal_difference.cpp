#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    
    int matrix[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cin >> matrix [i][j];
        }
    }
    
    int primarySum = 0;
    int secondarySum = 0;
    
    for (int i = 0; i < n; i++){
        primarySum += matrix[i][i];
        secondarySum += matrix[i][n - 1 - i];
    }
    
    int difference = std::abs(primarySum - secondarySum);
    std::cout <<""<<difference<<std::endl;
    return 0;
}
