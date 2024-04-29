#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> split(string sentence, char separator){
    vector<string> answer;
    stringstream ss(sentence);
    string tmp;
    
    while(getline(ss, tmp, separator)){
        answer.push_back(tmp);
    }
    return answer;
}


int solution(string s) {
    int answer = 0;
    vector<string> b = split(s, ' ');
    
    for(int i = 0; i < b.size(); i++){
        if(b[i] != "Z"){
            answer += stoi(b[i]);
        }
        else{
            answer -= stoi(b[i - 1]);
        }
    }
    
    return answer;
}