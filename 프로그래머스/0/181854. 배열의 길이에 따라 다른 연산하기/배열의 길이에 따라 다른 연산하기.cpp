#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    //짝수
    if(arr.size() % 2 == 0)
    {
        for(int i = 0; i < arr.size(); i++)
        {
            if(i % 2 != 0)
            {
                answer.push_back(arr[i] += n);
            }
            else
            {
                answer.push_back(arr[i]);
            }
        }
    }
    // 홀수
    else{
        for(int i = 0; i < arr.size(); i++)
        {
            if(i % 2 == 0)
            {
                answer.push_back(arr[i] += n);    
            }
            else{
                answer.push_back(arr[i]);
            }            
        }
        
    }
    return answer;
}