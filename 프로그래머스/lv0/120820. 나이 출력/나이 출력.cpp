#include <string>
#include <vector>

using namespace std;

int solution(int age) {
    age > 0 && age <= 120;
    int years = 2022 - age + 1;
    int answer = years;
    return answer;
}