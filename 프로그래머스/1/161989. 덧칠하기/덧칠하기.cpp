#include <string>
#include <vector>

using namespace std;


int solution(int n, int m, std::vector<int> section) {
    int answer = 0;
    int focus{};
    for (auto e : section)
    {
        if (focus < e)
        {
            answer += 1;
            focus = e + m - 1;
        }
    }
    return answer;
}
