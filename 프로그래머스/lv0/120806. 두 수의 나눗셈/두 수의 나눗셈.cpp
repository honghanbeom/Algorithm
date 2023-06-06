#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    num1 > 0 && num1 <= 100;
    num2 > 0 && num2 <= 100;
    int answer = 0;
    float a = num1;
    float b = num2;
    float x = a/b*1000;
    answer = int(x);
    return answer;
}