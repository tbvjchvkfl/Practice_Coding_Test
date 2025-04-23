#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days;

    // 각 작업의 완료까지 걸리는 일 수 계산
    for (int i = 0; i < progresses.size(); ++i) {
        int remaining = 100 - progresses[i];
        int day = ceil((double)remaining / speeds[i]);
        days.push_back(day);
    }

    // 배포 묶음 계산
    int current = days[0];
    int count = 1;

    for (int i = 1; i < days.size(); ++i) {
        if (days[i] <= current) {
            // 이전 작업보다 빨리 끝나면 함께 배포
            count++;
        } else {
            // 이전 배포 묶음 종료
            answer.push_back(count);
            current = days[i];
            count = 1;
        }
    }

    // 마지막 배포 묶음 추가
    answer.push_back(count);

    return answer;
}