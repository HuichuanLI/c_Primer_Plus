//
// Created by 李汇川 on 2022/4/30.
//

#ifndef POINTER_EFFECTIVE_CPLUS_PLUS_30_3_CONSTCLASS_CONST_H_
#define POINTER_EFFECTIVE_CPLUS_PLUS_30_3_CONSTCLASS_CONST_H_

#include <iostream>

class GamePlayer {
 public:
  GamePlayer();
  ~GamePlayer();
 private:
  static const int NumTurns = 5;  // 定义常量
  int scores[NumTurns];           // 使用常量
  // ...
};

#endif //POINTER_EFFECTIVE_CPLUS_PLUS_30_3_CONSTCLASS_CONST_H_
