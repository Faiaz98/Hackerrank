#include <iostream>
using namespace std;

int roundGrade(int grade) {
    if (grade < 38){
        return grade;
    }
    
    int nextMultipleOf5 = ((grade + 4) / 5) * 5;
    
    if (nextMultipleOf5 - grade < 3){
        return nextMultipleOf5;
    }
    return grade;
}

int main() {
    int n;
    cin>>n;
    
    int grade;
    for (int i = 0; i < n; i++){
        cin >> grade;
        int roundedGrade = roundGrade(grade);
        cout<<roundedGrade<<endl;
    }
    
    return 0;
}
