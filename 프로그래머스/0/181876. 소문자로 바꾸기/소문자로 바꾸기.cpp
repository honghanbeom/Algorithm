#include <string>
#include <vector>

using namespace std;

bool isSmall(char c)
{
    if(c >= 'a'&& c <= 'z')
    {
        return true;
    }
    return false;
}

string solution(string s) {
    string answer = "";
    for(char c : s)
    {
        (isSmall(c))?(answer += c):(answer += tolower(c));
    }
    return answer;
}