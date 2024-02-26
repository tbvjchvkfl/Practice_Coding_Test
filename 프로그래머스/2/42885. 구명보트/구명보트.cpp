#include <string>
#include <vector>
#include <algorithm>

int solution(std::vector<int> people, int limit) 
{
    int answer = 0;
    std::sort(people.begin(), people.end());
    int count{};
    while(count < people.size())
    {
        if(people[count] + people[people.size()-1] <= limit)
        {
            answer++;
            count++;
            people.pop_back();
        }
        else
        {
            answer++;
            people.pop_back();
        }
    }
    return answer;
}