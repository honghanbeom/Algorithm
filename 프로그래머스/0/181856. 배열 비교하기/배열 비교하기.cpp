#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    if(arr1.size() == arr2.size())
    {
        int arr1Sum = 0, arr2Sum = 0;
        for(const auto i : arr1)
        {
            arr1Sum += i;
        }
        for(const auto i : arr2)
        {
            arr2Sum += i;
        }
        
        if(arr1Sum > arr2Sum) return 1;
        else if(arr2Sum > arr1Sum) return -1;
        else return 0;
    }
    else{
        if(arr1.size() > arr2.size()) return 1;
        else return -1;
    }
}