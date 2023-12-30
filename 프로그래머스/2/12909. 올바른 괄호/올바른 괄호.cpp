#include<string>
#include <iostream>
#include <stack>

bool solution(std::string s)
{
    bool answer = true;
    std::stack<char> stemp;
    for (int i = 0; i < s.size(); i++)
    {
        char temp = s[i];
        if (temp == '(')
        {
            stemp.push(temp);
        }
        else if (temp == ')')
        {
            if (stemp.empty() || stemp.top() != '(')
            {
                answer = false;
                break;
            }
            stemp.pop();
        }
    }
    if (!stemp.empty())
    {
        answer = false;
    }
    return answer;
}