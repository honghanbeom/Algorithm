#include <string>
#include <vector>

using namespace std;

string solution(string c, int code) {
    string answer = "";
    for(int i = 0;  i< c.length(); i++)
    {
        if((i+1) % code == 0)
        answer.push_back(c[i]);
    }
    return answer;
}