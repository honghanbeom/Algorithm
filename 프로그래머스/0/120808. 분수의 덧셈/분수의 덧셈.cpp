#include <vector>

using namespace std;

// 최대 공약수를 계산하는 함수
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;

    int newNumer, newDenom;

    // 분모가 같은 경우
    if (denom1 == denom2) {
        newNumer = numer1 + numer2;
        newDenom = denom1;
    }
    // 분모가 다른 경우
    else {
        newNumer = numer1 * denom2 + numer2 * denom1;
        newDenom = denom1 * denom2;
    }

    // 최대 공약수를 계산하여 약분
    int gcdValue = gcd(newNumer, newDenom);
    newNumer /= gcdValue;
    newDenom /= gcdValue;

    answer.push_back(newNumer);
    answer.push_back(newDenom);

    return answer;
}
