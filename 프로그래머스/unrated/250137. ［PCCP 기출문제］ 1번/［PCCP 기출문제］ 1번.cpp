#include <iostream>
#include <string>
#include <vector>

int solution(std::vector<int> bandage, int health, std::vector<std::vector<int>> attacks) 
{
    int answer = 0;
    int subHP = health;
    int MonsterAttack{};
    int CureTime{};
    int totalTime{};
    while (true)
    {
        // 무한 루프 해제
        if (totalTime > attacks[attacks.size() - 1][0])
        {
            break;
        }

        // 몬스터의 공격
        for (int i = MonsterAttack; i < attacks.size(); i++)
        {
            if (attacks[i][0] == totalTime)
            {
                CureTime = 0;
                subHP -= attacks[i][1];
                MonsterAttack++;
                break;
            }
            else
            {
                subHP += bandage[1];

                // 최대 체력 이상 체력 회복 못함.
                if (subHP >= health)
                {
                    subHP = health;
                }

                if (CureTime == bandage[0])
                {
                    subHP += bandage[2]; // 붕대감기 연속 성공 보너스 체력 회복
                    CureTime = 0; // 붕대감기 시전 시간 초기화
                }
                break;
            }
        }
        
        // 캐릭터 죽음
        if (subHP <= 0)
        {
            answer = -1;
            break;
        }

        CureTime++;
        totalTime++;
        
        answer = subHP;
        
    }
    
    return answer;
}