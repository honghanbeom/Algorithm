#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    string changed = "";
    for(char c: myString){
        if(c == 'A') {changed += 'B';}
        else{ changed += 'A';}
    }
    
    if(changed.find(pat) == string::npos) return 0;
    else return 1;
}