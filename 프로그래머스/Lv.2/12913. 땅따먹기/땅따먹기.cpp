#include <iostream>
#include <vector>
#include <algorithm>

int solution(std::vector<std::vector<int>> land)
{
    int answer = 0;
    for (int i = 0; i < land.size() - 1; i++)
    {
        int land0 = land[i][0];
        int land1 = land[i][1];
        int land2 = land[i][2];
        int land3 = land[i][3];

        land[i + 1][0] += std::max(land1, std::max(land2, land3));
        land[i + 1][1] += std::max(land0, std::max(land2, land3));
        land[i + 1][2] += std::max(land0, std::max(land1, land3));
        land[i + 1][3] += std::max(land0, std::max(land1, land2));
    }

    answer = std::max(std::max(land[land.size()-1][0], land[land.size()-1][1]), std::max(land[land.size() - 1][2], land[land.size() - 1][3]));
    return answer;
}