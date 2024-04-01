#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for(int i = 0; i< myString.size(); i++){
        int count = 0;
        for(int j = 0; j <pat.size(); j++){
            if(myString[i+j] == pat[j]){
                count++;
                if(count == pat.size()){
                    answer++;
                }
            }
        }
    }
    return answer;
}