//
// Created by 李汇川 on 2022/5/4.
//
#include "Checkboard.h"
#include "stdio.h"
int main() {
  CheckerBoard checker_board(10, 10);
  checker_board.print();
  int win = 0;
  while (1) {
    {
      while (1) {
        printf("* black input: ");
        int x = 0;
        int y = 0;
        scanf("%d, %d", &x, &y);
        printf("x:%d, y: %d\n", x, y);
        int ret = checker_board.Put(x, y, ChessmanType::BLACK);
        if (ret) {
          printf("again");
          continue;
        }
        break;
      }

    }
    checker_board.print();
    win = checker_board.IsWin();
      if (s != 0) {
      break;
    }

    {
      while (1) {
        printf("* white input: ");
        int x = 0;
        int y = 0;
        scanf("%d, %d", &x, &y);
        printf("x:%d, y: %d\n", x, y);
        int ret = checker_board.Put(x, y, ChessmanType::WHITE);
        if (ret) {
          printf("again");
          continue;
        }
        break;
      }
    }
    checker_board.print();
    if (checker_board.IsWin() != 0)
      break;

  }
  printf("游戏结束\n");
  if (win == 1) {
    printf("black win\n");
  } else {
    printf("white win\n");
  }
}