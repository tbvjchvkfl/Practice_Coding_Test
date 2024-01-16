#include <vector>
#include <iostream>
#include <queue>

std::vector<int> solution(std::vector<int> arr)
{
    std::vector<int> answer;
    std::queue<int> q;

    for (int i = 0; i < arr.size(); i++)
    {
        if (q.empty() || q.back() != arr[i])
        {
            q.push(arr[i]);
        }
    }
    while (!q.empty())
    {
        answer.push_back(q.front());
        q.pop();
    }
    
    return answer;
}