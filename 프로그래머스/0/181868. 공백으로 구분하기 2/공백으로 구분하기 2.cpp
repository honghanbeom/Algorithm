#include <string>
#include <vector>

using namespace std;

vector<string> solution(string s) {
    vector<string> answer;
    string a = "";
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            a.push_back(s[i]);
        }
        if(a != "" && s[i] == ' ')
        {
            answer.push_back(a);
            a = "";
        }
    }
    
    if(a != "") answer.push_back(a);
    return answer;
}