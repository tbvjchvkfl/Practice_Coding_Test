#include <string>
#include <vector>
#include <stack>

long long solution(int n)
{
    long long answer = 0;
    std::vector<long long> DP(n + 1, 0);
    DP[1] = 1;
    DP[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        DP[i] = DP[i - 1] + DP[i - 2];
        DP[i] = DP[i] % 1234567;
    }
    answer = DP[n] % 1234567;
    return answer;
}


