#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

int solution(int k, std::vector<int> tangerine)
{
    int answer = 0;
    std::vector<int> count(10000001, 0);
    for (int i = 0; i < tangerine.size(); i++)
    {
        count[tangerine[i]] += 1;
    }
    std::sort(count.begin(), count.end(), [](int a, int b) {return a > b; });
    int rescount = 0;
    while (k > 0)
    {
        k -= count[rescount];
        rescount++;
        answer++;
    }
    return answer;
}