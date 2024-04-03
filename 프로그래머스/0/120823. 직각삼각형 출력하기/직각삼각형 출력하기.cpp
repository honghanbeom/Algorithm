#include <iostream>

using namespace std;

string returnStar(int a){
    string b = "";
    for(int i = 0; i < a; i++){
        b += '*';
    }
    return b;
}

int main(void) {
    int n;
    cin >> n;    
    for(int i = 1; i <= n; i++){
        cout << returnStar(i) << endl;
    }
    
    
    return 0;
}