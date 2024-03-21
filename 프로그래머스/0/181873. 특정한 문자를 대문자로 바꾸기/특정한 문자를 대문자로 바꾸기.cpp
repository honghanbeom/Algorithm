#include <string>
#include <vector>

using namespace std;

string solution(string s, string alp) {
    string a = s;
    for(int i = 0; i < s.length(); i++)
    {
        if(a[i] == alp[0])
        {
            a[i] = toupper(a[i]);
        }
    }
    return a;
}