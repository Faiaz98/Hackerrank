#include <iostream>
#include <iomanip>
#include <vector>

void calculateRatios(const std::vector<int>& arr) {
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;
    
    for (int num : arr) {
        if (num > 0){
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        }
        else {
            zeroCount++;
        }
    }
    
    int total = arr.size();
    
    std::cout<< std::fixed <<std::setprecision(6);
    std::cout<< static_cast<double>(positiveCount)/total <<std::endl;
    std::cout<<static_cast<double>(negativeCount)/ total <<std::endl;
    std::cout<<static_cast<double>(zeroCount)/total <<std::endl;
}

int main(){
    int n;
    std::cin >> n;
    
    std::vector<int> arr(n);
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    
    calculateRatios(arr);
    return 0;
}