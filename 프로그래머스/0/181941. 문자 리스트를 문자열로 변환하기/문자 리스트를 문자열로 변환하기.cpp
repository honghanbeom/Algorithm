#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr) {
    string answer = "";
    for(auto s : arr)
    {
        answer.append(s);
    }
    return answer;
}