#include <string>
#include <vector>

using namespace std;
enum mod { SUM,
           MIN,
           MUL
};
int solution(string binomial) {
    string a,b = "";
    bool change = false;
    mod myMod = SUM;
    for(char c : binomial){
        if(c >= '0' && c <= '9'){
            if(!change) a+= c;
            else b+=c;
        }
        else{
            if(c != ' '){
                change = !change;
                switch(c){
                case'*':
                myMod = MUL;
                break;
                case'+':
                myMod = SUM;
                break;
                case'-':
                myMod = MIN;
                break;
                }
            }
        }
    }
    
    switch(myMod){
        case SUM:
            return stoi(a) + stoi(b);  
        case MIN:
            return stoi(a) - stoi(b);
        case MUL:
            return stoi(a) * stoi(b); 
    }
}