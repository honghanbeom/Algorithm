#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    string a = s;
    int index = 0;
    while(true)
    {
        index = a.find("x");
        if(index == string::npos)
        {
            answer.push_back(a.length());
            break;
        }
        else{
             answer.push_back(index);
             a = a.substr(index + 1); 
        }
    }
    return answer;
}