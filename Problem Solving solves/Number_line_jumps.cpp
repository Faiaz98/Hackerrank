#include <iostream>
using namespace std;

string kangarooMeet(int x1, int v1, int x2, int v2) {
    if((v1 <= v2) || (x2 - x1) % (v1 - v2) != 0)
        return "NO";
    else
     return "YES";
}

int main(){
    int x1,v1,x2,v2;
    cin>>x1>>v1;
    cin>>x2>>v2;
    
    string result = kangarooMeet(x1, v1, x2, v2);
    cout<<result<<endl;
    return 0;
}
