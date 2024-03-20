#include <string>
#include <vector>

using namespace std;

int solution(string s, string p) {
    for(int i = 0; i < p.size(); i++)
    {
        if(s[i] != p[i])
        {
            return 0;
        }
    }
    return 1;
}