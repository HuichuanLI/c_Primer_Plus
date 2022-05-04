#pragma once
#include "Chessman.h"
class CheckerBoard {
 public:
  CheckerBoard(int W, int h);
  int width = 0;
  int height = 0;
  Chessman *table = nullptr;
  ~CheckerBoard();
  Chessman Get(int x, int y);
  int print();
  int Put(int x, int y, ChessmanType type);
  int IsWin();
};