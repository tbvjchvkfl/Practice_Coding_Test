#include <string>
#include <vector>
#include <algorithm>

int solution(std::vector<std::vector<int>> routes) 
{
    int answer = 1;
    std::sort(routes.begin(), routes.end());
    int Camera = routes[0][1];
    for (int i = 1; i < routes.size(); i++)
    {
        if (routes[i][1] < Camera)
        {
            Camera = routes[i][1];
        }
        else if (routes[i][0] > Camera)
        {
            Camera = routes[i][1];
            answer++;
        }
    }
    return answer;
}