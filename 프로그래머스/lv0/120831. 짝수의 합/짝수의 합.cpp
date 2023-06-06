#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    n > 0 && n <= 1000; 
    if (n%2==0) // 짝수
    {
        answer = (n/2 + 1)*(n/2);    
    }
    else // 홀수
    {
        answer = (n + 1)*(n - 1 )/4;
    }
    return answer;
}