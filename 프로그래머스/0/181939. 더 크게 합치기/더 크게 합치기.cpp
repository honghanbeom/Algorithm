#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string c = to_string(a);
    string d = to_string(b);
    return stoi(c + d) >= stoi(d + c) ? stoi(c + d) : stoi( d+ c);
}