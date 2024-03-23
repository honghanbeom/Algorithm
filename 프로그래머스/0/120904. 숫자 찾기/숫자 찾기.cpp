#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    string a = to_string(num);
    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] == k + '0') return i + 1;
    }
    return -1;
}