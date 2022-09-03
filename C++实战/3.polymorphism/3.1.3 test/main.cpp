#include <list>
#include "FileMission.h"
#include "DbMission.h"
#include "OtherMission.h"

int main()
{
    // 向链表中添加任务
    list<Task*> missionList;
    missionList.push_back(new FileMission);
    missionList.push_back(new DbMission);
    missionList.push_back(new OtherMission);

    // 遍历所有任务任务
    auto it = missionList.begin();
    for(; it != missionList.end(); ++it) {
        (*it)->doWork();
    }
    
    // 释放链表中所有任务
    it = missionList.begin();
    for(; it != missionList.end(); ++it) {
        delete (*it);
        (*it) = nullptr;
    }
    missionList.clear();
    return 0;
}