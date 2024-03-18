#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(int i = 0; i < n; i++)
    {
        answer += s[i];
    }
    
    return answer;
}