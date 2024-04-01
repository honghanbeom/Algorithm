#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> q) {
    vector<int> answer = arr;
    for(int i = 0; i < q.size(); i++){
        int start = q[i][0];
        int end = q[i][1];
        for(int j = start; j <= end; j++){
            answer[j]++;
        }
    }
    return answer;
}