#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> d) {
    vector<int> answer;
    for(int i = 0; i < arr.size(); i++){
        int count = 0;
        for(int j = 0; j < d.size(); j++){
            if(arr[i] == d[j]) count++;
        }
        if(count == 0){
            answer.push_back(arr[i]);
        }
    }
    return answer;
}