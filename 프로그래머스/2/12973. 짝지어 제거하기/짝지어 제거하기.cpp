#include <iostream>
#include <string>
#include <stack>

int solution(std::string s)
{
    int answer = 0;
        std::stack<char> stemp;
    for (int i = 0; i < s.size(); i++)
    {
        if (stemp.size()>0&&stemp.top() == s[i])
        {
            stemp.pop();
        }
        else
        {
            stemp.push(s[i]);
        }
    }
    if (stemp.empty())
    {
        answer = 1;
    }
    return answer;
}