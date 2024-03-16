#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    for(int i = 0; i < s.size(); i++)
    {
        if('0'<=s[i] && s[i] <= '9')
        {
            answer += s[i] - '0';
        }
    }
    
    return answer;
}