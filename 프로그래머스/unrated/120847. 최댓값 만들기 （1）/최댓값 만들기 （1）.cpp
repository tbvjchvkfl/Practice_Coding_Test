#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.begin(), numbers.end(), [](int a, int b){return a>b;});
    answer = numbers[0] * numbers[1];
    return answer;
}