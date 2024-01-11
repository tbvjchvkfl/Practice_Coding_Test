#include <string>
#include <vector>

long long solution(int n) 
{
    long long answer = 0;

    std::vector<long long> LLFibo(n + 1, 0);
    
    LLFibo[1] = 1;
    LLFibo[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        LLFibo[i] = LLFibo[i - 1] + LLFibo[i - 2];
        LLFibo[i] = LLFibo[i] % 1234567;
    }
    answer = LLFibo[n] % 1234567;
    return answer;
}