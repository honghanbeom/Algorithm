#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(),numbers.end());
    int a = numbers.back();
    numbers.pop_back();
    int b = numbers.back();
    int answer = a*b;
    return answer;
}