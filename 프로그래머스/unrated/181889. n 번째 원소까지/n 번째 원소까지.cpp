#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    int plus;
    vector<int> answer;
    
    for(int i = 0; i < n; i++)
    {
        plus = num_list.at(i);
        answer.push_back(plus);
    }
    return answer;
}