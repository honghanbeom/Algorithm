#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    string answer = "";
    for(auto c : str)
    {
        if(c >= 'a' && c<= 'z')
        {
            answer.push_back(toupper(c));
        }
        else{
            answer.push_back(tolower(c));
        }
    }
    cout << answer;
    return 0;
}