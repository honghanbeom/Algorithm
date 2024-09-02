#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int test = 1;
    while(n + 1 != test){
        if(n % test == 0)
        {
            answer += test;   
        }
        test++;
    }
    
    
    return answer;
}