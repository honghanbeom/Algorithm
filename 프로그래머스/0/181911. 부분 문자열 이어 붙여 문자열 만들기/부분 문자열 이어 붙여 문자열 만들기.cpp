#include <string>
#include <vector>

using namespace std;

string solution(vector<string> s, vector<vector<int>> parts) {
    string answer = "";
    for(int i = 0 ; i < s.size(); i++){
         int start = parts[i][0];
         int end = parts[i][1] - parts[i][0] +1;
         answer += s[i].substr(start,end);
        }
    return answer;
}