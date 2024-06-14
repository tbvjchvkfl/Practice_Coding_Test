#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    std::vector<int> temp;
    for(int i = 1; i<=n; i++)
    {
        if(n%i == 0)
        {
            answer+=i;
        }
    }
    
    return answer;
}