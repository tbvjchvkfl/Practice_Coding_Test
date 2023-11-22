#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = 0;
    for(auto e : control)
    {
        if(e == 'w')
        {
            n +=1;
        }
        else if(e == 's')
        {
            n -=1;
        }
        else if (e == 'd')
        {
            n+=10;
        }
        else if ( e== 'a')
        {
            n-=10;
        }
        answer = n;
    }
    return answer;
}