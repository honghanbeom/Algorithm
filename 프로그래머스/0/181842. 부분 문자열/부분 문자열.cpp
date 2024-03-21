#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int nPos = str2.find(str1);
    if(nPos == string::npos) return 0;
    return 1;
}