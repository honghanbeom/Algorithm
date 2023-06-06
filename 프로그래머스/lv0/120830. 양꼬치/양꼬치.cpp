#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    n > 0 && n < 1000; // n범위
    n/10 <= k < 1000; // k 범위
    int y = n/10;
    answer = 12000*n + 2000*k - y*2000;
    return answer;
}