#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int even = 0;
    int odd = 0;
    for(int a = 0; a<num_list.size(); a++)
    {
        if(num_list[a] %2 == 0)
        {
            even++;               
        }
        if(num_list[a]%2 != 0)
        {
            odd++;
        }
    }
    vector<int> answer = {even,odd};
    return answer;
}