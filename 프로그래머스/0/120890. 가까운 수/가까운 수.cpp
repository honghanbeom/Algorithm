#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> array, int n) {
    int index = 0;
    int a = abs(array[0] - n);
    
    for(int i = 1; i < array.size(); i++){
        if(abs(array[i] - n) < a){
            a = abs(array[i] - n);
            index = i;
        }
        else if(abs(array[i] - n) == a){
            if(array[i] < array[index]){
                index = i;
            }
        }
    }
    return array[index];
}