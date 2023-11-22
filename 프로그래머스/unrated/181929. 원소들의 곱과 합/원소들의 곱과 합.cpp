#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    // 모든 원소들의 합
    int Add{};
    // 모든 원소들의 합의 제곱
    int AddM{};
    // 모든 원소들의 곱
    int Multiply{ 1 };
    for(int i = 0; i<num_list.size(); i++)
    {
        Add += num_list[i];
    }
    AddM = Add * Add;
    for(int j = 0; j<num_list.size(); j++)
    {
        Multiply *= num_list[j];
    }
    if(AddM>Multiply)
    {
        answer = 1;
    }
    
    return answer;
}