#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    int temp = 1;
    for(int i = 0; i < emergency.size(); i++){
        for(int j = 0; j < emergency.size(); j++){
            if(i != j && emergency[i] < emergency[j]){
                temp++;
            }
        }
        answer.push_back(temp);
        temp = 1;
    }
    
    return answer;
}