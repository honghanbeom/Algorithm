#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    if(direction == "right"){
        int temp = numbers[numbers.size() - 1];
        numbers.pop_back();
        numbers.insert(numbers.begin(), temp);
    }
    else{
        int temp = numbers[0];
        numbers.erase(numbers.begin());
        numbers.push_back(temp);
    }
    return numbers;
}