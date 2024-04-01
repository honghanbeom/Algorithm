#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> a, int k, int s, int l) {
    vector<int> answer;
    for(string i : a){
        int j = stoi(i.substr(s,l));
        if(j > k)answer.push_back(j);
    }
    return answer;
}