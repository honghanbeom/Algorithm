#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start, int end) {
    vector<int> answer;
    while(start >= end)
    {
        answer.push_back(start);
        start--;
    }
    return answer;
}