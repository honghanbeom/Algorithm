#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int horizontal = box[0] / n;
    int vertical = box[1] / n;
    int height = box[2] / n;

    return horizontal * vertical * height;
}