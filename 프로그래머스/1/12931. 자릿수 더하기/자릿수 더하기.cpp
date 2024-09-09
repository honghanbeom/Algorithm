#include <iostream>
#include <cmath>

int solution(int n)
{
    int answer = 0;
    while(n >= 10){
        answer += n % 10;
        n = n/10;
    }
    answer += n;
    return answer;
}