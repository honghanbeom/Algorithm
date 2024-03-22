#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    for(auto c : s)
    {
        if(c == 'a'){
            answer.push_back('A');
        }
        else if(c == 'A'){ answer.push_back('A');}
        else{
            answer.push_back(tolower(c));
        }
    }
    return answer;
}