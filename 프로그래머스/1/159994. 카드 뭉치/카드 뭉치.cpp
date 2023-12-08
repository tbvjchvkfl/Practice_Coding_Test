#include <string>
#include <vector>
#include <iostream>

std::string solution(std::vector<std::string> cards1, std::vector<std::string> cards2, std::vector<std::string> goal) {
    std::string answer = "";
    std::vector<std::string> temp;
    int focus{};
    int card1f{};
    int card2f{};

    while (focus != cards1.size() + cards2.size())
    {
        if (cards1[card1f] == goal[focus])
        {
            temp.push_back(cards1[card1f]);
            card1f++;
            if (card1f == cards1.size())
            {
                card1f = cards1.size() - 1;
            }
        }
        else if (cards2[card2f] == goal[focus])
        {
            temp.push_back(cards2[card2f]);
            card2f++;
            if (card2f == cards2.size())
            {
                card2f = cards2.size() - 1;
            }
        }
        focus++;
    }
    if (temp.size() != goal.size())
    {
        answer = "No";
    }
    else
    {
        for (int i = 0; i < temp.size(); i++)
        {
            if (temp[i] != goal[i])
            {
                answer = "No";
                break;
            }
            if (temp[i] == goal[i])
            {
                answer = "Yes";
            }
        }
    }
    
    return answer;
}