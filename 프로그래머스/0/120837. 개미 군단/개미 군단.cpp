#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = hp/5;
    if(hp % 5 != 0){
        int a = (hp%5)/3;
        answer += a;
        if((hp%5)%3 != 0){
            int b  = (hp%5)  % 3;
            answer += b;
        }
    }
    return answer;
}