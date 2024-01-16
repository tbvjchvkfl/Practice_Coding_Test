#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
int solution(std::vector<int> nums)
{
    int answer = 0;
    int count = nums.size() / 2;
    std::map<int, int> mselect;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mselect.find(nums[i]) == mselect.end())
        {
            mselect.insert({ nums[i], 1 });
        }
        else
        {
            mselect[nums[i]]++;
        }
    }
    
    if (mselect.size() > count)
    {
        answer = count;
    }
    else
    {
        answer = mselect.size();
    }
    return answer;
}