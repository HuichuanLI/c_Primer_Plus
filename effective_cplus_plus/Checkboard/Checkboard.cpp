
#include "Checkboard.h"
#include <stdlib.h>
#include "Chessman.h"
#include <stdio.h>

CheckerBoard::CheckerBoard(int w, int h) {
  width = w;
  height = h;
  table = (Chessman *) malloc(width * height * sizeof(int));
  for (int i = 0; i < width * height; i++) {
    table[i].type = ChessmanType::NONE;
  }

};

CheckerBoard::~CheckerBoard() {
  if (table != nullptr) {
    free(table);
    table = nullptr;
  }
}

Chessman CheckerBoard::Get(int x, int y) {
  if (x < 0 || x >= width) {
    Chessman res;
    res.type = ChessmanType::NONE;
    return res;
  }

  if (y < 0 || y >= height) {
    Chessman res;
    res.type = ChessmanType::NONE;
    return res;
  }
  int index = y * width + x;
  return table[index];
}

int CheckerBoard::IsWin() {

  for (int y = 0; y < height; y++) {
    for (int x = 0; x < width; x++) {
      Chessman chessman = Get(x, y);
      if (chessman.type == ChessmanType::NONE)
        continue;
      Chessman h1 = Get(x + 1, y);
      Chessman h2 = Get(x + 2, y);
      Chessman h3 = Get(x + 3, y);
      Chessman h4 = Get(x + 1, y);
      if (chessman.type == h1.type && chessman.type == h2.type && chessman.type == h3.type
          && chessman.type == h4.type) {
        if (chessman.type == ChessmanType::BLACK) {
          return 1;
        } else {
          return 2;
        }
      }
      h1 = Get(x, y + 1);
      h2 = Get(x, y + 2);
      h3 = Get(x, y + 3);
      h4 = Get(x, y + 4);
      if (chessman.type == h1.type && chessman.type == h2.type && chessman.type == h3.type
          && chessman.type == h4.type) {
        if (chessman.type == ChessmanType::BLACK) {
          return 1;
        } else {
          return 2;
        }
      }
      h1 = Get(x + 1, y + 1);
      h2 = Get(x + 2, y + 2);
      h3 = Get(x + 3, y + 3);
      h4 = Get(x + 4, y + 4);
      if (chessman.type == h1.type && chessman.type == h2.type && chessman.type == h3.type
          && chessman.type == h4.type) {
        if (chessman.type == ChessmanType::BLACK) {
          return 1;
        } else {
          return 2;
        }
      }
    }

  }
  return 0;
}

int CheckerBoard::print() {
  for (int j = 0; j < height; j++) {
    for (int i = 0; i < width; i++) {
      Chessman chessman = Get(i, j);
      if (chessman.type == ChessmanType::BLACK) {
        printf("-B");
      } else if (chessman.type == ChessmanType::WHITE) {
        printf("-W");
      } else {
        printf("- ");
      }
    }
    printf("\n");
  }
}

int CheckerBoard::Put(int x, int y, ChessmanType type) {
  if (x < 0 || x >= width)
    return -1;
  if (y < 0 || y >= height)
    return -1;
  Chessman chessman = Get(x, y);
  if (chessman.type != ChessmanType::NONE) {
    return -1;
  }

  int index = y * width + x;
  table[index].type = type;

  return 0;
}