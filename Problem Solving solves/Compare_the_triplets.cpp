#include <iostream>
#include <vector>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b){
    vector<int> points(2, 0);
    for(int i = 0; i < 3; i++){
        if(a[i] > b[i]){
            points[0]++;
        }
        else if(a[i] < b[i]){
            points[1]++;;
        }
    }
    return points;
}

int main() {
    vector<int> a(3), b(3);
    
    for(int i = 0; i < 3; i++){
        cin >> a[i];
    }
    for(int i = 0; i< 3; i++){
        cin >> b[i];
    }
    
    vector<int> result = compareTriplets(a, b);
    for(int i = 0; i < 2; i++){
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}