#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) 
{
    string answer;
    int a = my_string.size();
    int count = 0;
    for(int i = 0; i<a;i++)
    {
        while(count < n)
        {
            answer +=  my_string[i]; 
            count++;
        }
        count-=n;
     }
    return answer;
}