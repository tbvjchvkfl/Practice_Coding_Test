#include <string>
#include <vector>
#include <queue>

long long solution(int n, std::vector<int> works) 
{
    long long answer = 0;
    std::priority_queue<int> pq;

    for (int i = 0; i < works.size(); i++)
    {
        pq.push(works[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        auto temp = pq.top();
        pq.pop();
        if (temp > 0)
        {
            pq.push(temp - 1);
        }
        else
        {
            pq.push(0);
        }
    }
    while (!pq.empty())
    {
        auto WorkCount = pq.top();
        pq.pop();
        answer += WorkCount * WorkCount;
    }

    return answer;
}