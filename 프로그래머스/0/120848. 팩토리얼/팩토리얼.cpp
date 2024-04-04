#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int s = 1;
    int mul = 1;
    while(s <= n){
        mul++;
        s *= mul;
    }
    return mul - 1;
}