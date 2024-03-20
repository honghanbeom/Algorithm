#include <string>
#include <vector>

using namespace std;

vector<string> solution(string s) {
    vector<string> answer;
    string temp = "";
    for(const auto c: s)
    {
        if(c >= 'a' && c <= 'z')
        {
           temp += c;
        }
        else if(c == ' ')
        {
            answer.push_back(temp);
            temp = "";
        }
    }
    
    if(temp != "")
    {
        answer.push_back(temp);
    }
    return answer;
}