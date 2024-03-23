#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    for(int i = 0; i < n; i++)
    {
        vector<int> inside;
        for(int j = 0; j < n; j++)
        {
            if(j == i) inside.push_back(1);
            else{ inside.push_back(0);}
        }
        answer.push_back(inside);
        
    }
    return answer;
}