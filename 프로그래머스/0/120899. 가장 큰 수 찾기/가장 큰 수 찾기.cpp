#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int index = 0, num = 0;
    for(int i = 0; i < array.size() - 1; i++)
    {
        if(array[i] < array[i+1]){ num = array[i+1]; index = i + 1; }
    }
    answer.push_back(num);
    answer.push_back(index);
    return answer;
}