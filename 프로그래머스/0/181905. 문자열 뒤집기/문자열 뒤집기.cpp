#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = my_string.substr(0 , s);
    
    for(int i = e; i >= s; i--){
        answer += my_string[i];
    }
    
    answer.append(my_string.substr(e + 1));
    
    return answer;
}