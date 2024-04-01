#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < s.size(); j++){
            if(answer.find(s[i]) == string::npos && s[i] == s[j]){
                answer += s[i];
            }
        }
    }
    
    return answer;
}