#include <string>
#include <vector>
#include <queue>

std::vector<int> solution(std::vector<std::string> operations) 
{
    std::vector<int> answer(2, 0);
    std::priority_queue<int> pq1; //내림차순
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq2; //오름차순

    int count{};

    for (int i = 0; i < operations.size(); i++)
    {
        if (operations[i][0] == 'I')
        {
            int x = 0;
            x = std::stoi(operations[i].substr(2));
            pq1.push(x);
            pq2.push(x);
            count++;
        }
        if(count != 0)
        {
            if (operations[i] == "D -1")
            {
                pq2.pop();
                count--;
            }
            if (operations[i] == "D 1")
            {
                pq1.pop();
                count--;
            }
            if (count == 0)
            {
                while (!pq1.empty())
                {
                    pq1.pop();
                }
                while (!pq2.empty())
                {
                    pq2.pop();
                }
            }
        }
    }

    if (count != 0)
    {
        answer[0] = pq1.top();
        answer[1] = pq2.top();
    }
 
    return answer;
}