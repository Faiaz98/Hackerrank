#include <iostream>
#include <vector>

int countTallestCandles(const std::vector<int>& candles) {
    int maxCandleHeight = 0;
    int tallestCandleCount = 0;
    
    for (int height : candles){
        if(height > maxCandleHeight){
            maxCandleHeight = height;
            tallestCandleCount = 1;
        } else if (height == maxCandleHeight) {
        tallestCandleCount++;
        }
    }
    return tallestCandleCount;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> candles(n);
    for(int i = 0; i < n; i ++){
        std::cin >> candles[i];
    }
    
    int tallestCount = countTallestCandles(candles);
    std::cout<<""<<tallestCount<<std::endl;
    
    return 0;
}