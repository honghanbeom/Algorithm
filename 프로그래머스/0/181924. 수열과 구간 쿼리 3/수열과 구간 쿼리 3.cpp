#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> q) {
    vector<int> answer = arr;
    for(int i = 0; i < q.size(); i++){
        int a = answer[q[i][0]];
        int b = answer[q[i][1]];
        int temp = 0;

        temp = b;
        b = a;
        a = temp;
        
        answer[q[i][0]] = a;
        answer[q[i][1]] = b;
        
    }
    return answer;
}