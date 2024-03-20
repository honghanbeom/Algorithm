#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str = "";
    int n = 0;
    cin >> str >> n;
    string temp = "";
    for(int i = 0; i <n; i++)
    {
        temp.append(str);
    }
    cout << temp;
    return 0;
}