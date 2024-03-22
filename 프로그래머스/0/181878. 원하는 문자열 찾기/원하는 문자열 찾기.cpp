#include <string>

using namespace std;

int solution(string s, string pat) {
    if(s.length() < pat.length()) return 0; // 문자열 s가 문자열 pat보다 짧으면 부분 문자열이 될 수 없으므로 0을 반환

    // 문자열 s와 pat을 소문자로 변환
    for(char& c : s) {
        c = tolower(c);
    }
    for(char& c : pat) {
        c = tolower(c);
    }
    
    // 문자열 s에서 부분 문자열 pat을 찾는 로직
    for(int i = 0; i <= s.length() - pat.length(); i++) { // 문자열 s를 검색하기 위한 범위 설정
        bool found = true;
        for(int j = 0; j < pat.length(); j++) {
            if(s[i + j] != pat[j]) { // 문자열 s의 해당 위치의 문자와 pat의 문자가 다를 경우
                found = false;
                break; // 부분 문자열이 아니므로 루프 종료
            }
        }
        if(found) return 1; // 부분 문자열을 찾은 경우 1을 반환
    }
    return 0; // 부분 문자열을 찾지 못한 경우 0을 반환
}
