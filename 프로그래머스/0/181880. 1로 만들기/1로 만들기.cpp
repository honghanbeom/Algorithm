#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int count = 0;
    for(int i = 0; i < num_list.size(); i++)
    {
        int a = num_list[i];
        while(a != 1)
        {
            //짝수 
            if(a % 2 == 0){
                count++;
                a = a / 2;
            }
            else{
                count++;
                a = (a - 1)/2;
            }
        }
    }
    
    return count;
}