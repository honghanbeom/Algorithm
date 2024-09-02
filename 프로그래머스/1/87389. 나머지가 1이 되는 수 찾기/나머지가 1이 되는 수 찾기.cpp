#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int test = 1;
    
    while(n >= test){
        if(n % test == 1){
            answer = test;
            break;
        }
        test++;
    }
    
    return answer;
}