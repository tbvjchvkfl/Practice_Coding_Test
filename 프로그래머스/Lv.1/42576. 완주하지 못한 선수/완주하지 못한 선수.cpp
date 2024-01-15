#include <string>
#include <vector>
#include <map>

std::string solution(std::vector<std::string> participant, std::vector<std::string> completion) {
    std::string answer = "";

    std::map<std::string, int> mparti;

    for (int i = 0; i < participant.size(); i++)
    {
        if (mparti.find(participant[i]) == mparti.end())
        {
            mparti.insert({ participant[i], 1 });
        }
        else
        {
            mparti[participant[i]] += 1;
        }
    }

    for (int i = 0; i < completion.size(); i++)
    {
        mparti[completion[i]] -= 1;
    }

    for (auto e : mparti)
    {
        if (e.second != 0)
        {
            answer = e.first;
        }
    }

    return answer;
}
