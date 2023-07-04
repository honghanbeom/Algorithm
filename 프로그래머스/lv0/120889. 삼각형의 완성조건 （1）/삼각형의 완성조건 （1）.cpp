#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) 
{
    // sides[0],sides[1],sides[2]
    int answer = 0;
    if(sides[0] >= sides[1])
    {
        if(sides[0]>= sides[2])
        {
            bool a = sides[2] + sides[1] > sides[0];
            if(a == true)
            {
                answer = 1;
            }
            else{answer = 2;}
        }
    }
    
    if(sides[1] >= sides[0])
    {
        if(sides[1]>= sides[2])
        {
            bool b = sides[0] + sides[2] > sides[1];
            if(b == true)
            {
                answer = 1;
            }
            else{answer = 2;}
        }
    }
    
    if(sides[2] >= sides[0])
    {
        if(sides[2]>= sides[1])
        {
            bool c = sides[0] + sides[1] > sides[2];
            if(c == true)
            {
                answer = 1;
            }
            else{answer = 2;}
        }
    }


    return answer;
}