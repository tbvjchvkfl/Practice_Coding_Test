#include <string>
#include <vector>
#include <map>


int solution(int a, int d, std::vector<bool> included) {
    int answer = 0;
    std::map<bool, int> Test;
    for (int i = 0; i < included.size(); i++)
    {
        if (i == 0)
        {
            Test[included[i]] = a;
            if (included[i] == true)
            {
                answer += Test[included[i]];
            }
        }
        else
        {
            Test[included[i]] = Test[included[i - 1]] + d;
            if (included[i] == true)
            {
                answer += Test[included[i]];
            }
        }
    }
    return answer;
}