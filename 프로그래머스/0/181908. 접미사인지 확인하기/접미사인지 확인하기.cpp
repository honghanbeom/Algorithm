#include <string>
#include <vector>

using namespace std;

int solution(string s, string p) {
    int answer = 0;
    vector<string> a;
    for(int i = 0; i < s.length(); i++)
    {
        a.push_back(s.substr(i));
    }
    
    for(auto l : a)
    {
        if(l == p) return 1;
    }
    return 0;
}