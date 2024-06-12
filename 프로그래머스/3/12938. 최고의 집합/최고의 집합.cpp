#include <string>
#include <vector>
#include <algorithm>

std::vector<int> solution(int n, int s) 
{
    std::vector<int> answer;

    if (n > s)
    {
        answer.push_back(-1);
    }
    else
    {
        int Devide = s / n;
        int remain = s % n;
        int index{};

        for (int i = 0; i < n; i++)
        {
            answer.push_back(Devide);
        }
        while (remain > 0)
        {
            answer[index] += 1;
            remain--;
            index++;
            if (index == answer.size())
            {
                index = 0;
            }
        }
        std::sort(answer.begin(), answer.end());
    }

    return answer;
}