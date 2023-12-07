#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

std::string solution(std::vector<int> food) {
    std::string answer = "";
    std::vector<int>temp;
    
    for (int i = 1; i < food.size(); i++)
    {
        for (int j = 0; j < food[i] / 2; j++)
        {
            temp.push_back(i);
        }
        
    }
    for (auto e : temp)
    {
        answer.append(std::to_string(e));
    }
    
    answer.push_back('0');

    sort(temp.begin(), temp.end(), [](int x, int y) {return x > y; });

    for (auto e : temp)
    {
        answer.append(std::to_string(e));
    }

    return answer;
}