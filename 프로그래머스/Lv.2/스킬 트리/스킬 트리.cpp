
#include <string>
#include <stack>
#include <vector>

int solution(std::string skill, std::vector<std::string> skill_trees) 
{
    int answer = 0;
    std::vector<std::string> SkillTrist;
    std::string ConfirmedStr;

    for (auto s : skill_trees)
    {
        ConfirmedStr.clear();
        for (auto t : s)
        {
            // 유저의 스킬트리가 skill에 있는 항목들인가 검사
            if (skill.find(t) != std::string::npos)
            {
                // skill에 있는 것들만 따로 담는다.
                ConfirmedStr += t;
            }
        }
        if (skill.substr(0, ConfirmedStr.size()) == ConfirmedStr)
        {
            answer++;
        }
    }
    return answer;
}
