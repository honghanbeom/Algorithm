#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) 
{
    int a = my_string.length();
    string answer;
    if(a >=1 && a <= 1000)
    {
        if(n>=1 && n<= a)
        {
            answer = my_string.substr(a-n);          
        }
    }
    return answer;
}