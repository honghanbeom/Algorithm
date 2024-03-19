#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    // 기존의 num_list를 answer에 복사합니다.
    for(auto i : num_list) {
        answer.push_back(i);
    }
    
    // num_list의 마지막 인덱스를 변수에 저장합니다.
    int lastIndex = num_list.size() - 1;
    
    // 마지막 요소가 두 번째 마지막 요소보다 큰지 확인합니다.
    if(num_list[lastIndex] > num_list[lastIndex - 1]) {
        // 만약 더 크다면, 두 요소의 차이를 추가합니다.
        int add = num_list[lastIndex] - num_list[lastIndex - 1];
        answer.push_back(add);
    } else {
        // 그렇지 않으면 마지막 요소의 두 배를 추가합니다.
        int add = num_list[lastIndex] * 2;
        answer.push_back(add);
    }
    
    return answer;
}
