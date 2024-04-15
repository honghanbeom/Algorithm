#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    for(int i = 0; i < s.size(); i++){
        string b = s.substr(0,i);
        string a = s.substr(i + 1);
        b.append(a);
        if(b.find(s[i]) == string::npos){
            answer += s[i];
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}