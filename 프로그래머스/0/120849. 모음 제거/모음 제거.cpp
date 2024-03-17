#include <string>
#include <vector>

using namespace std;

bool FindVowel(char c)
{
    switch(c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default :
            return false;
    }
}


string solution(string s) {
    string answer = "";
    
    for(char c : s)
    {
        if(!FindVowel(c))
        {
            answer.push_back(c);
        }
    }
    
    return answer;
}