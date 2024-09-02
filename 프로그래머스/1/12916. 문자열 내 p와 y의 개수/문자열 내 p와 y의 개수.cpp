#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int pCount = 0, yCount = 0;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'p' || s[i] == 'P'){
            pCount++;
        }
        if(s[i] == 'Y' || s[i] == 'y'){
            yCount++;
        }
        
    }
    
    if(yCount == pCount) return true;
    
    return false;
}