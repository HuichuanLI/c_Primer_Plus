//
// Created by 李汇川 on 2022/5/4.
//

#pragma once
enum ChessmanType {

  BLACK,
  WHITE,
  NONE
};

class Chessman {
 public:
  ChessmanType type = ChessmanType::NONE;
};