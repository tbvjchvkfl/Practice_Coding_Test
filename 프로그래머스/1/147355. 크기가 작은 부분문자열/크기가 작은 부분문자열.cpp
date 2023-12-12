#include<iostream>
#include <string>
#include <vector>


int solution(std::string t, std::string p) {
    int answer = 0;
    long long temp{};
    temp = std::stoll(p);

    std::vector<long long> lltemp;

    std::vector<int> vtemp;
    for (int i = 0; i < t.size(); i++)
    {
        std::string str{};
        long long stemp{};
        str = t.substr(i, p.size());
        stemp = std::stoll(str);
        if (str.size() == p.size())
        {
            if (temp >= stemp)
            {
                answer++;
            }
        }
    }
    return answer;
}