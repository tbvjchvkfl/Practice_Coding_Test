#include <iostream>
#include<vector>
#include <algorithm>

int solution(std::vector<int> A, std::vector<int> B)
{
    int answer = 0;
    std::sort(A.begin(), A.end());
    std::sort(B.begin(), B.end(), [](int a, int b) {return a > b; });
    int cnt{};
    int min_value{};
    while (cnt != A.size())
    {
        min_value += A[cnt] * B[cnt];
        cnt++;
    }
    answer = min_value;
    return answer;
}