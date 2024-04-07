#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    while(myString.find("x") != string::npos){
        int index = myString.find("x");
        if(myString.substr(0,index) != ""){
            answer.push_back(myString.substr(0,index));
        }
        myString = myString.substr(index + 1);
    }
    
    if(myString != ""){
        answer.push_back(myString);
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}