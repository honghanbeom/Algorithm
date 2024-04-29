#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    for(int a = i; a <= j; a++){
        string s = to_string(a);
        if(s.find(to_string(k)) != string::npos){
            for(int b = 0; b < s.size(); b++){
                if(s[b] == k + '0'){
                    answer++;
                }
            }
        }
    }
    
    return answer;
}