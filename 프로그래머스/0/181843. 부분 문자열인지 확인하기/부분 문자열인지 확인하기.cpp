#include <string>
#include <vector>

using namespace std;

int solution(string s, string t) {
        for(int i  = 0; i < s.length(); i++)
        {
            int count = 0;
            for(int j = 0; j < t.length(); j++)
            {
                if(s[i + j] == t[j])
                {
                    count++;
                    if(count == t.length()) { return 1; }
                }
                else { break; }
            }
        }
    return 0;
}