#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool is2(int a){
    return (a & (a - 1)) == 0;
}

vector<int> solution(vector<int> arr) {
    while(!is2(arr.size())){
        arr.push_back(0);
    }
    return arr;
}