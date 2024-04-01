#include <string>
#include <vector>
#include <iterator>

using namespace std;

string solution(string str1, string str2) {
    string answer = str1;
    
    for(int i = 0; i < str2.size(); i++){
        answer.insert(2 * i +1, 1, str2[i]);
    }
    
    return answer;
}
