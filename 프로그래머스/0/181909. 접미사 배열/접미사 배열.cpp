#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string s) {
    vector<string> answer;
    
    for(int i = s.size() - 1; i >= 0; i--){
        answer.push_back(s.substr(i));
    }
    
    sort(answer.begin(), answer.end());
    
    
    return answer;
}