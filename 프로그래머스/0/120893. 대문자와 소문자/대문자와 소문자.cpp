#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    for(char& c : s)
    {
        if(c >= 'a' && c <= 'z')
        {
            c = toupper(c);
        }
        else{
            c = tolower(c);
        }
    }
    return s;
}