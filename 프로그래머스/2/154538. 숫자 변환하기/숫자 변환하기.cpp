#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int x, int y, int n) {
    int answer = 0;
    std::vector<int> v(1000001, 0);
std::queue<int> q;
q.push(x);
while (!q.empty())
{
    int cur = q.front();
    q.pop();
    if (cur == y)
    {
        return v[cur];
    }
    int dx[3] = { cur + n, cur * 2, cur * 3 };
    for (int i = 0; i < 3; i++)
    {
        int nx = dx[i];
        if (nx > y || v[nx] != 0)
        {
            continue;
        }
        v[nx] = v[cur] + 1;
        q.push(nx);
    }
}
    return -1;
}