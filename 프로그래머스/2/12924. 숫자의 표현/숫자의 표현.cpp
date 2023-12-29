#include <string>
#include <vector>
#include <stack>
#include <iostream>

int solution(int n) 
{
    int answer = 1;
    for (int i = 1; i < n; i++)
    {
        int result = i;
        for (int j = i+1; j < n; j++)
        {
            result += j;
            if (result == n)
            {
                answer++;
            }
            if(result > n)
            {
                break;
            }
        }
    }

    /*int answer = 0;
    std::stack<int> s;
    for (int i = 1; i <= n; i++)
    {
        int result{};
        if (i == n)
        {
            answer++;
        }
        else
        {
            s.push(i);
            while (!s.empty())
            {
                int temp = s.top();
                result += temp;
                s.pop();

                if (result == n)
                {
                    answer++;
                }
                if (result > n)
                {
                    break;
                }
                else
                {
                    s.push(result + 1);
                }
            }
        }
    }*/
    return answer;
}