#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string s) {
    bool isMinus = false;
    int answer = 0;
    for(int i = 0; i< s.length(); i++){
        if(s[0] == '-'){
            isMinus = true;
        }
        
        if(s[i] >= '0' && s[i] <= '9'){
            answer += pow(10,(s.length() - 1 - i)) * (s[i] - '0');
        }
        
    }
    
    if(isMinus){
        answer = answer * (-1);
    }
    
    return answer;
}