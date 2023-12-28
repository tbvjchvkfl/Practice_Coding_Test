#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

std::string solution(std::string s) 
{
    std::string answer = "";
    std::vector<int> vtemp;
    std::string stemp;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            stemp += s[i];
        }
        else
        {
            vtemp.push_back(std::stoi(stemp));
            stemp.clear();
        }
    }
    vtemp.push_back(std::stoi(stemp));
    std::sort(vtemp.begin(), vtemp.end());
    answer = std::to_string(vtemp[0]) + " " + std::to_string(vtemp[vtemp.size() - 1]);
    return answer;
}