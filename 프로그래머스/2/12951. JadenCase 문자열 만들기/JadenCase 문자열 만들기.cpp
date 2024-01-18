#include <string>
#include <vector>

std::string solution(std::string s) {
    std::string answer = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (i != 0 && s[i - 1] == ' ')
        {
            answer += std::toupper(s[i]);
        }
        else if (i == 0)
        {
            answer += std::toupper(s[i]);
        }
        else
        {
            answer += std::tolower(s[i]);
        }
    }
    return answer;
}