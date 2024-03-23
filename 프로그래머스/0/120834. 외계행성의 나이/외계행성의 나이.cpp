#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string sAge = to_string(age);
    for(auto c : sAge)
    {
        answer.push_back(c + 49);
    }
    return answer;
}