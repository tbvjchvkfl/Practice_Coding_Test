#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

bool solution(std::vector<std::string> phone_book) 
{
    bool answer = true;
    std::map<std::string, int> m;
    for (int i = 0; i < phone_book.size(); i++)
    {
        m.insert({ phone_book[i], phone_book[i].size() });
    }

    for (int i = 0; i < phone_book.size(); i++)
    {
        for (int j = 0; j < m[phone_book[i]] - 1; j++)
        {
            std::string stemp = phone_book[i].substr(0, j + 1);
            if (m[stemp])
            {
                return false;
            }
        }
    }
    return answer;
}