#include <iostream>
#include <algorithm>

int main() {
    int n = 5;
    int arr[n];
    
    for (int i=0; i < n; i++) {
        std::cin >> arr[i];
    }
    
    std::sort(arr, arr + n);
    
    long minSum = 0, maxSum = 0;
    for(int i = 0; i < n - 1; i++) {
        minSum += arr[i];
        maxSum += arr[i+1];
    }
    
    std::cout <<""<< minSum <<" "<< maxSum <<std::endl;
    
    
    return 0;
}