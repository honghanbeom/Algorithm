#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string a = "";
    for(char s : rsp)
    {
        if(s == '2')
        {
            a.push_back('0');
        }
        else if(s == '0')
        {
            a.push_back('5');
        }
        else{
            a.push_back('2');
        }
    }
    return a;
}