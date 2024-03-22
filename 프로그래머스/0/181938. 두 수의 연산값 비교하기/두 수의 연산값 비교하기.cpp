#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string answer = "";
    string c = to_string(a);
    string d = to_string(b);
    return stoi(c+d) >= 2 * stoi(c) * stoi(d)? 
    stoi(c + d) : 2 * stoi(c) * stoi(d);
    
}